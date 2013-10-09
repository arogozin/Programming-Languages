#include <iostream>
#include <string>
using namespace std;

int main(int argc, char * argv[])
{
	string a = "hello";
	char b[a.size()];
	b = a;

	cout	<< "A = " << a << endl
		<< "B = " << b
	<< endl;
	return 0;
}
