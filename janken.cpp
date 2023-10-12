#include "janken.h"
#include <iostream>
using namespace std;

enum Hand
{
	Gu,
	Tyoki,
	Pa,
};

void Janken::Choice()
{
	cout << "何を出す？" << endl;
	cout << "グー > 0, チョキ > 1, パー > 2" << endl;
	cin >> player;
	
}

void Janken::Enemy()
{
	enemy = rand() % 3;	
}


void Janken::Gamejanken()
{
	while (true)
	{
		if (hand['gu-'] == hand[enemy])
		{
			cout << "あいこで..." << endl;
		}
		/*else if ( == )
		{
			cout << "あいこで..." << endl;
		}
		else if (hand[player] == hand[enemy])
		{
			cout << "あいこで..." << endl;
		}*/
		
	}
}