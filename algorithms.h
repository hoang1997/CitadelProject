#pragma once
#include "scenario.h"
#include "attacker.h"
#include "route_setup.h"

class algorithms {
public:
	void obstructionCaclulator(layer lay, vector<obstruction> route, attacker a);

	int layerStartPoint(vector<layer> environment, attacker a);

	string accessConversion(int a);

	int diff_calc(vector<obstruction> route);

};