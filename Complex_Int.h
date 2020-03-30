#pragma once
#include <iostream>

// contains a complex integer class with basic operations
class Complex_Int {
public:
	Complex_Int(int real, int imag);
	Complex_Int();
	Complex_Int(const Complex_Int& z);
	Complex_Int& operator=(const Complex_Int& z);
	~Complex_Int();

	const int& r() const;
	int& r();

	const int& i() const; 
	int& i();
	
	Complex_Int operator+(const Complex_Int& other) const;

	void operator+=(const Complex_Int& other);

	Complex_Int operator-(const Complex_Int& other) const;

	void operator-=(const Complex_Int& other);
	
	void operator*=(const Complex_Int& other);
	
	Complex_Int operator*(const Complex_Int& other) const;

private:
	int m_r;
	int m_i;
};


std::ostream& operator<<(std::ostream& out, const Complex_Int& z);
