
#include "complex_class.cc"
#include <iostream>

int main() {
	Complex_Int a(2, 3);
	Complex_Int b;
	b = Complex_Int(4, 6);
	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a * b << std::endl;
}
