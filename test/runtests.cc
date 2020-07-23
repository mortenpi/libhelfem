#include <helfem>
#include <helfem_utils>
#include <armadillo>

using namespace std;

int main(int argc, char * argv[]) {
    helfem::hw();

    // Call helfem::utils::get_grid
    auto v = helfem::utils::get_grid(5.0, 10, 1, 0.0);
    cout << "Linear grid:" << endl << v << endl;

    v = helfem::utils::get_grid(40.0, 20, 4, 2.0);
    cout << "Exponential grid:" << endl << v << endl;

    return 0;
}
