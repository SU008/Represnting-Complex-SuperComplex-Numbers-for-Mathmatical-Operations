#include "complex.h"

#ifndef SUPERCOMPLEX
#define SUPERCOMPLEX

#include <iostream>
using namespace std;

class superComplex : public complex
{
protected:

	int imag_2;

	friend istream& operator>> (istream&, superComplex&);
	friend ostream& operator<< (ostream&, superComplex&);

public:
	superComplex();
	superComplex(int r, int i, int i_2) : complex (r,i) {imag_2=i_2;} // regular/overloading constructor
	// ----- operators
	superComplex operator+(superComplex s);
	superComplex operator-(superComplex s);
	
	// -----
	//void setSuperComplex(int r, int i, int i_2);
	superComplex* getSuperComplex();
	int getImag2();
	~superComplex(){};
};

superComplex::superComplex ()
{
	imag_2 =0;
}
superComplex superComplex:: operator+(superComplex s)
{
	superComplex temp;
	temp.real= real+s.real;
	temp.imag= imag+s.imag;
	temp.imag_2= imag_2+s.imag_2;
	return temp;
}

 superComplex superComplex:: operator-(superComplex s)
{
	superComplex temp;
	temp.real= real-s.real;
	temp.imag= imag-s.imag;
	temp.imag_2= imag_2-s.imag_2;
	return temp;
}



istream& operator>> (istream& is, superComplex& temp)
{
	is >> temp.real;
	is >> temp.imag;
	is >> temp.imag_2;
	return is;
}
ostream& operator<< (ostream& os, superComplex& temp)
{
	os << "\nComplex number = ";
	os << temp.real;
	os << "+j";
	os << temp.imag;
	os << "+j_2 ";
	os << temp.imag_2;
	os << "\n";
	return os;
}



#endif