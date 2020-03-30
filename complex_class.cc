#pragma once
  
#include <iostream>

class Complex_Int {
public:
	Complex_Int(int real, int imag): m_r(real), m_i(imag) {};
	Complex_Int(): Complex_Int(0, 0) {};
	Complex_Int(const Complex_Int& z) = default;
	Complex_Int& operator=(const Complex_Int& z) = default;
	~Complex_Int() = default;

	const int& r() const {return m_r;}
	int& r() {return m_r;}

	const int& i() const {return m_i;}
	int& i() {return m_i;}
	
	Complex_Int operator+(const Complex_Int& other) const {
	       Complex_Int res(*this);
	       res.r() += other.r();
	       res.i() += other.i();
	       return res;
	}

	void operator+=(const Complex_Int& other) {
		m_r += other.r();
		m_i += other.i();
	}

	Complex_Int operator-(const Complex_Int& other) const {
	       Complex_Int res(*this);
	       res.r() -= other.r();
	       res.i() -= other.i();
	       return res;
	}

	void operator-=(const Complex_Int& other) {
		m_r -= other.r();
		m_i -= other.i();
	}
	
	void operator*=(const Complex_Int& other) {
		int temp_r = m_r;
		int temp_i = m_i;
		m_r = temp_r * other.r() - temp_i * other.i();
		m_i = temp_r * other.i() + temp_i * other.r();
	}
	
	Complex_Int operator*(const Complex_Int& other) const {
	       Complex_Int res(*this);
	       res *= other;
	       return res;
	}

private:
	int m_r;
	int m_i;
};


std::ostream& operator<<(std::ostream& out, const Complex_Int& z) {
	out << z.r() << ',' << z.i();
	return out;
}
