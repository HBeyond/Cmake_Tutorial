#include <Tutorial.h>
//#include <cstdlib>
#include <iomanip>
#include <iostream>
#include "sum.cpp"

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        // report version
        std::cout << argv[0] << " Version " << CMakeTest_VERSION_MAJOR << "." << CMakeTest_VERSION_MINOR << std::endl;
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
    } else if (argc == 2) {
        //        const double inputValue = atof(argv[1]);
        const double inputValue = std::stod(argv[1]);
        double x = 121.51356;
        cout << setprecision(19) << "x: " << x << endl;
        cout << "inputValue: " << inputValue + x << endl;
    }
    return 1;
}
