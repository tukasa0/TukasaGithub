#ifndef JANKEN_H_
#define JANKEN_H_

const int HAND_NAMBER = 3;

class Janken
{
public:
	const char* hand[HAND_NAMBER] = { "グー", "チョキ", "パー", };
	int player;
	int playerPoint;
	int enemy;
	int enemyPoint;


	void Choice();

public:
	void Gamejanken();

	void Enemy();

	void Hand(int& hand);
};

//Janken::Janken()
//{
//
//	
//
//}

#endif 