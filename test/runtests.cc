#include <armadillo>
#include <helfem>

using namespace std;

int main(int argc, char *argv[]) {
  cout << "VERSION: " << helfem::version() << endl;

  // Call helfem::utils::get_grid
  auto v = helfem::utils::get_grid(5.0, 10, 1, 0.0);
  cout << "Linear grid:" << endl << v << endl;

  v = helfem::utils::get_grid(40.0, 20, 4, 2.0);
  cout << "Exponential grid:" << endl << v << endl;

  return 0;
}
