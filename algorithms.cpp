#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "algorithms.h"
using namespace std;
void algorithms::obstructionCaclulator(layer lay ,vector<obstruction> route ,attacker a) {
	for (int i = 0; i < lay.getEntryPoints().size(); i++)
	{
		if (lay.getEntryPoints()[i].type = 2 && a.getSkillLevel().technical >= lay.getEntryPoints()[i].diff_value)
		{
			route.push_back(lay.getEntryPoints()[i]);
		}
		else if (lay.getEntryPoints()[i].type = 1 && a.getSkillLevel().physical >= lay.getEntryPoints()[i].diff_value)
		{
			route.push_back(lay.getEntryPoints()[i]);
		}
	}
}

int algorithms::layerStartPoint(vector<layer> e ,attacker a) {
	for (int i = 0; i < e.size(); i++)
	{
		if (e[i].getAccess() == a.getLevelOfAccess())
		{
			return i;
			break;
		}
	}
}


string algorithms::accessConversion(int a) {
	string access;
	if (a = 1)
	{
		access = "No Access";
		return access;
	}
	else if (a = 2)
	{
		access = "Perimeter Access";
		return access;
	}
	else if (a = 3)
	{
		access = "Building Access";
		return access;
	}
	else if (a = 4)
	{
		access = "Technical Access";
		return access;
	}
	else if (a = 5)
	{
		access = "All Access";
		return access;
	}
}

int algorithms::diff_calc(vector<obstruction> route) {
	int diff = 0;
	for (int i = 0; i < route.size(); i++)
	{
		diff += route[i].diff_value;
	}

	return diff / route.size();
}

