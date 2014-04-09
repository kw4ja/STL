#include "cShuffle.h"

using namespace std;

cShuffle::cShuffle(void)
{
	srand((unsigned int)time(NULL));
}

cShuffle::~cShuffle(void)
{

}

void cShuffle::Shuffle( int ShuffleCount )
{
	int Dest, Src, Temp=0;
	
	for(int i=0; i<ShuffleCount; i++)
	{
		Dest = rand() % MAXNUM;
		Src = rand() % MAXNUM;

		Temp = Card[Dest];
		Card[Dest] = Card[Src];
		Card[Src] = Temp;
	}
}

void cShuffle::Init()
{
	for(int i = 0; i<MAXNUM; i++)
	{
		Card[i]= i;
	}
}

void cShuffle::Print()
{
	for(int i=0; i<MAXNUM; i++)
	{
		cout << Card[i] << endl;
	}
}
