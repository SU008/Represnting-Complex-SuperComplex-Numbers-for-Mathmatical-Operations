#ifndef COMPLEX
#define COMPLEX

#include <iostream>
using namespace std;

class complex
{
protected:
	int real;
	int imag;

public:
	complex();
	complex(int r, int i);
	int getReal();
	int getImag();
	//complex operator+(complex s);
	//complex operator-(complex s);
	//complex operator*(complex s);
	//int setComplex(int r, int i); >>>>>>>not used
	complex* getComplex();
	~complex(){};
};


complex::complex () {};

complex::complex (int r, int i)
{
	real = r;
	imag = i;
}
int complex::getReal()
{
	return(real);
}
int complex::getImag()
{
	return(imag);
}





#endif