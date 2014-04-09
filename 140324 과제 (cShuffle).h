#pragma once
#include <iostream>
#include <time.h>
using namespace std;

#define  MAXNUM 52

class cShuffle
{
	int Card[MAXNUM];
	int Temp;
public:
	cShuffle(void);
	~cShuffle(void);

	void Init();
	void Shuffle(int ShuffleCount = MAXNUM*3);
	void Print();
};
