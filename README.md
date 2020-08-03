# libhelfem

```
cmake .. -DCMAKE_PREFIX_PATH=local/usr/ -DCMAKE_INSTALL_PREFIX=local/usr/
```

The installation directory can contain libraries, e.g. a custom build of Armadillo.

* **Documentation.** We use [Doxygen](https://www.doxygen.nl/)-compatible inline documentation. The API docs can simply be built by running `doxygen` in the root directory. It will create an HTML site under `doc/`.

* **Code style.** We use [ClangFormat](https://clang.llvm.org/docs/ClangFormat.html) for standard code style for the C++ source code. The project's code style is defined by the `.clang-format` file. The following command can be invoked to update all the source files:

  ```
  clang-format -i src/*.cc include/* test/*
  ```

  **Beware:** this will update the source code in-place. Just in case, make sure that your work is backed up (e.g. committed) before running CLangFormat.

## License and citations

The library derives from [HelFEM](https://github.com/susilehtola/HelFEM), written by Susi Lehtola. The code is licensed under GPLv2.

The original code was described in the following articles:

* S. Lehtola, Hartree—Fock and hybrid density functional theory calculations of static properties at the complete basis set limit via finite elements. I. Atoms. [arXiv:1810.11651](http://arxiv.org/abs/1810.11651)
* S. Lehtola, Hartree—Fock and hybrid density functional theory calculations of static properties at the complete basis set limit via finite elements. II. Diatomic molecules. [arXiv:1810.11653](http://arxiv.org/abs/1810.11653)
