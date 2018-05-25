#pragma once


class Fgame
{
public:
	void Reset();
	int  Getmoretries();
	int Getcurenttry();
	bool Iswon();
	bool Checkguess();


private:
	int Curenttriy;
	int Maxtry;

};
