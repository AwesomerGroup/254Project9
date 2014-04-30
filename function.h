#ifndef function_H
#define function_H

#include <iostream>

using namespace std;

class Mult{
public:
	int multiply(int x);
private:
	int x;	
};

int Mult::multiply(int x)
{
	x = x * 100;
	return x;
}

#endif
