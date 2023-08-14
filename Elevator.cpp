#include "Elevator.h"


Elevator::Elevator() {
	range = 0;
	regime = "";
	working = "";
	floor = 0;
}


int Elevator::set_Range(int range) {
	this->range = range;
}

int Elevator::set_Range(int ) {
	this->floor = floor;
}


string Elevator::set_Regime(string regime) {
	this->regime = regime;
}

string Elevator::set_Working(string working) {
	this->working = working;
}







int Elevator::get_Range() {
	return range;
}

int Elevator::get_Range() {
	return floor;
}


string Elevator::get_Regime() {
	return regime;
}

string Elevator::get_Working() {
	return working;
}