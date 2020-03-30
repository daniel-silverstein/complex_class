#include <iostream>
#include "Complex_Int.h"

// implemintation of complex interger class
Complex_Int::Complex_Int(int real, int imag): m_r(real), m_i(imag) {};
Complex_Int::Complex_Int(): Complex_Int(0, 0) {};
Complex_Int::Complex_Int(const Complex_Int& z) = default;
Complex_Int& Complex_Int::operator=(const Complex_Int& z) = default;
Complex_Int::~Complex_Int() = default;

const int& Complex_Int::r() const {return m_r;}
int& Complex_Int::r() {return m_r;}

const int& Complex_Int::i() const {return m_i;}
int& Complex_Int::i() {return m_i;}

Complex_Int Complex_Int::operator+(const Complex_Int& other) const {
       Complex_Int res(*this);
       res.r() += other.r();
       res.i() += other.i();
       return res;
}

void Complex_Int::operator+=(const Complex_Int& other) {
	m_r += other.r();
	m_i += other.i();
}

Complex_Int Complex_Int::operator-(const Complex_Int& other) const {
       Complex_Int res(*this);
       res.r() -= other.r();
       res.i() -= other.i();
       return res;
}

void Complex_Int::operator-=(const Complex_Int& other) {
	m_r -= other.r();
	m_i -= other.i();
}

void Complex_Int::operator*=(const Complex_Int& other) {
	int temp_r = m_r;
	int temp_i = m_i;
	m_r = temp_r * other.r() - temp_i * other.i();
	m_i = temp_r * other.i() + temp_i * other.r();
}

Complex_Int Complex_Int::operator*(const Complex_Int& other) const {
       Complex_Int res(*this);
       res *= other;
       return res;
}


std::ostream& operator<<(std::ostream& out, const Complex_Int& z) {
	out << z.r() << ',' << z.i();
	return out;
}
