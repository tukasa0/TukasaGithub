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
	cout << "�����o���H" << endl;
	cout << "�O�[ > 0, �`���L > 1, �p�[ > 2" << endl;
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
			cout << "��������..." << endl;
		}
		/*else if ( == )
		{
			cout << "��������..." << endl;
		}
		else if (hand[player] == hand[enemy])
		{
			cout << "��������..." << endl;
		}*/
		
	}
}