#pragma once
#include <iostream>
using namespace std;


class Elevator
{
private:
	int range;
	string regime;
	string working;
	int floor;

public:
	Elevator();
	Elevator(int range, string regime, string working, int floor)
		: range(range), regime(regime), working(working), floor(floor) {}











	int set_Range(int range);
	int set_Floor(int range);
	string set_Regime(string regime);
	string set_Working(string range);

	int get_Range();
	int get_Floor();
	string get_Regime();
	string get_Working();
};

