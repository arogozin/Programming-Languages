#include <iostream>

using namespace std;

enum Numbers
{
	ONE = 1,
	TWO = 2,
	THREE = 3
};

enum Stuff
{
	FIVE = 5,
	NINE = 9
};

int main()
{
	cout << "ONE + TWO = " << (ONE + TWO) << endl;
	cout << "FIVE - THREE = " << (FIVE - THREE) << endl;
	cout << "NINE / TWO = " << (NINE / TWO) << endl;
	cout << "NINE * ONE = " << (NINE * ONE) << endl;
	cout << "ONE | TWO = " << (ONE | TWO) << endl;
	cout << "TWO & THREE = " << (TWO & THREE) << endl;
	cout << "NINE ^ ONE = " << (NINE ^ ONE) << endl;
	cout << "THREE << 2 = " << (THREE << 2) << endl;
	cout << "THREE >> 2 = " << (THREE >> 2) << endl;
	cout << "TWO++ = " << (TWO++) << endl;

	return 0;
}
