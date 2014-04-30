#include <iostream>
#include "function.h"

using namespace std;

int main(){	
	Mult multiplythis;

	int x=0;
	int a=0;
	x = 2 + 2;
	cout << x << endl;
	cout << "OUTPUT TEXT" << endl;
	a=multiplythis.multiply(x);
	cout <<a <<endl;

	
	
	cout << multiplythis.multiply(x) << endl;

	return 0;
}
