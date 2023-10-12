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
	cout << "1～100の数字を当ててください > " << flush;

}

bool Kazuate::Answer()
{

	cin >> answer;

	if (answer == number)
	{
		cout << "正解！" << endl;
		return false;
	}
	else if (abs(Diff()) <= 5)
	{
		cout << "おしい！" << endl;
	}
	else
	{
		if (Diff() < 0)
		{
			cout << "もっと小さいよ！" << endl;
		}
		else if (Diff() > 0)
		{
			cout << "もっと大きいよ！" << endl;
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