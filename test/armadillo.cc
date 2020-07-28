#include <armadillo>

int main(int argc, char *argv[]) {
  arma::Col<int> v(3);
  v.fill(3);
  if (sum(v) != 9)
    return 1;
  return 0;
}
