cmake_minimum_required(VERSION 3.10)
project(helfem CXX)

# Try to find the Armadillo C++ library
find_package(Armadillo REQUIRED)
message("Found Armadillo ${ARMADILLO_VERSION_NAME} (v${ARMADILLO_VERSION_MAJOR}.${ARMADILLO_VERSION_MINOR}.${ARMADILLO_VERSION_PATCH})")
message("ARMADILLO_VERSION_STRING: ${ARMADILLO_VERSION_STRING}")
message("ARMADILLO_INCLUDE_DIRS:   ${ARMADILLO_INCLUDE_DIRS}")
message("ARMADILLO_LIBRARIES:      ${ARMADILLO_LIBRARIES}")
if(NOT (${ARMADILLO_VERSION_MAJOR} EQUAL "9"))
    message(FATAL_ERROR "Invalid Armadillo version, expected 9.")
endif()

# Library targets. We build both the static and shared libraries, and they share the source
# files.
set(helfem-src
    src/helfem.cc
)

add_library(helfem STATIC ${helfem-src})
target_include_directories(helfem PUBLIC include/ ${ARMADILLO_INCLUDE_DIRS})
target_link_libraries(helfem PUBLIC ${ARMADILLO_LIBRARIES})

# add_library(helfem SHARED ${helfem-src})
# target_include_directories(helfem PUBLIC include/)
# target_link_libraries(helfem ${ARMADILLO_LIBRARIES})

# Installation locations for files.
install(
    TARGETS helfem
    LIBRARY
      DESTINATION lib
    ARCHIVE
      DESTINATION lib
)
install(DIRECTORY include/ DESTINATION include)

# Tests
enable_testing()

add_executable(test.runtests test/runtests.cc)
target_link_libraries(test.runtests helfem)
add_test(NAME runtests COMMAND test.runtests)

add_executable(test.armadillo test/armadillo.cc)
target_link_libraries(test.armadillo helfem)
add_test(NAME armadillo COMMAND test.armadillo)
