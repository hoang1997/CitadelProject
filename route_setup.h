#pragma once
#include "scenario.h"
#include "attacker.h"

struct route {
	vector<obstruction> path;
	vector<string> layerNames;
	int difficulty;

};

class routeCollection {
private:
	vector<route> routes;
	route r;
public:
	void createRouteArr(scenario s, attacker a);
	vector<route> getRouteArr();

	void printRouteCollection(vector<route> routes);

	void setRoute(scenario s, attacker a);
	vector<route> getRoute();
};