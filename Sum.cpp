#include "Sum.h"
#include <iostream>
using namespace std;

void Stream::Set()
{
	cout << "�l�����͂��Ă�������" << endl;
	cin >> a >> b;
}

int Stream::Sum()
{
	cout << "�����Z�̌��ʂ�";
	return a + b;
}