#include "kazuate.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void Kazuate::Number()
{
	srand((unsigned int)time(NULL));

	number = rand() % 100 + 1;
	cout << number << endl;
	cout << "1�`100�̐����𓖂ĂĂ������� > " << flush;

}

bool Kazuate::Answer()
{

	cin >> answer;

	if (answer == number)
	{
		cout << "�����I" << endl;
		return false;
	}
	else if (abs(Diff()) <= 5)
	{
		cout << "�������I" << endl;
	}
	else
	{
		if (Diff() < 0)
		{
			cout << "�����Ə�������I" << endl;
		}
		else if (Diff() > 0)
		{
			cout << "�����Ƒ傫����I" << endl;
		}
	}

	return true;
}

int Kazuate::Diff()
{
	return number - answer;
}

void Kazuate::Gamekazuate()
{
	Number();

	while (Answer())
	{

	}
}