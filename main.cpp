#include <iostream>

template <typename T1, typename T2>
class Comparator {
public:
    auto Min(T1 a, T2 b) {
        return (a < b) ? a : b;
    }
};

int main() {
    Comparator<int, int> c1;
    std::cout << "(int, int)       : Min(10, 20) = " << c1.Min(10, 20) << std::endl;

    Comparator<float, float> c2;
    std::cout << "(float, float)   : Min(5.5f, 2.3f) = " << c2.Min(5.5f, 2.3f) << std::endl;
 
    Comparator<double, double> c3;
    std::cout << "(double, double) : Min(3.1415, 2.7182) = " << c3.Min(3.1415, 2.7182) << std::endl;
   
    Comparator<int, float> c4;
    std::cout << "(int, float)     : Min(10, 3.14f) = " << c4.Min(10, 3.14f) << std::endl;

    Comparator<int, double> c5;
    std::cout << "(int, double)    : Min(5, 2.718) = " << c5.Min(5, 2.718) << std::endl;

    Comparator<float, double> c6;
    std::cout << "(float, double)  : Min(4.5f, 4.499) = " << c6.Min(4.5f, 4.499) << std::endl;

    return 0;
}