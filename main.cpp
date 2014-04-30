#include <iostream>
#include "function.h"

using namespace std;

int main(){	
	int x=0;
	int a=0;
	x = 2 + 2;
	cout << x << endl;
	cout << "OUTPUT TEXT" << endl;
	a=multiply(x);
	cout <<a <<endl;

	Mult multiplythis;
	
	cout << multiplythis.multiply(x) << endl;

	return 0;
}
