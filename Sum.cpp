#include "Sum.h"
#include <iostream>
using namespace std;

void Stream::Set()
{
	cout << "値を二つ入力してください" << endl;
	cin >> a >> b;
}

int Stream::Sum()
{
	cout << "足し算の結果は";
	return a + b;
}