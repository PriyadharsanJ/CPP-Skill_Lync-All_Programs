#include <iostream>

// Function template to calculate the value of pi
template <typename T>
constexpr T pi() {
    return T(3.14159265358979323846);
}

int main() {
    // Using the pi function template to get the value of pi for different data types
    double pi_double = pi<double>();
    float pi_float = pi<float>();

    std::cout << "Value of pi (double): " << pi_double << std::endl;
    std::cout << "Value of pi (float): " << pi_float << std::endl;

    return 0;
}
