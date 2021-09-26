#include <iostream>

#include "supercomplex.h"

using namespace std;

void main()
{

	superComplex	first(1,2,3);
	superComplex	second(3,4,5);
	superComplex Third;

	cout <<first;
	cout<< second;

	cout << "\n\nPlease enter first supercomplex number => ";
	cin >> first;
	cout << first;

	cout << "\n\nPlease enter second supercomplex number => ";
	cin >> second;
	cout << second;

	Third=first+second;
	cout << "\n\nSum " << Third;

	Third=first-second;
	cout << "\n\nSubtraction " << Third;

	//cout << third.getreal();
	//cout << "+j";
	//cout << third.getimag();

}