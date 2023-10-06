#include "Sum.h"
#include <iostream>
using namespace std;

int mult(int a, int b)
{
	cout << "掛け算の結果は";
	return a * b;
}



int main()
{
	
	Stream stream;

	stream.Set();
	
	cout << mult(stream.a, stream.b) << endl;

	cout << stream.Sum();
	
}

