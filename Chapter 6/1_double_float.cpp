#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
	double a = 10.9123123;
	float b = 15.25;
	float c;

	c = a;
	a = b;

	cout	<< "A = " << a << endl
		<< "B = " << b << endl
		<< "C = " << c
	<< endl;
	return 0;
}
