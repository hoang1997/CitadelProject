#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "algorithms.h"
#include "route_setup.h"
using namespace std;

void routeCollection::createRouteArr(scenario s, attacker a) {
	char stop = 's';
	int input = 0;
	while (stop != 'q')
	{
		cout << "Would you lke to:\n1. Add Route\n2. Quit" << endl;
		cin >> input;
		switch (input) {
		case 1:
			setRoute(s,a);
			routes.push_back(r);
			break;
		case 2:
			stop = 'q';
			break;
		default:
			cout << "Please enter a correct value" << endl;
			system("pause");
			system("CLS");
			break;
		}
	}
}

void routeCollection::printRouteCollection(vector<route> routes) {
	cout << "Routes:" << endl;
	for (int i = 0; i < routes.size(); i++)
	{
		cout << "Route: " << i + 1 << endl;
		printf("%-20s%-25s%-20s%-25s\n", "Entry Point", "Layer", "Name", "Difficulty");
		for (int j = 0; j < routes.size(); j++)
		{
			printf("%-20d%-25s%-20s%-25d\n", j + 1, routes[i].layerNames[j].c_str(), routes[i].path[j].name.c_str(), routes[i].path[j].diff_value);
		}
		printf("%-20s%-25s%-20s%-25d\n", "...", "...", "Likelihood:", routes[i].difficulty);
	}
}

vector<route> routeCollection::getRouteArr(){
	return routes;
}

void routeCollection::setRoute(scenario s, attacker a) {
	algorithms alg;
	for (int i = 0; i < s.getLayerCollection().size(); i++)
	{
		int input = 0;
		cout << "Set Route\nPlease choose an entry point\n\nLayer " << i + 1 << ":" << s.getLayerCollection()[i].getName() << "\n\nEntry Points:" << endl;
		printf("%-25s%-25s%-20s\n", "Reference#", "Name", "Difficulty");
		for (int j = 0; j < s.getLayerCollection()[i].getEntryPoints().size(); j++)
		{
			if (a.getSkillLevel().technical > s.getLayerCollection()[i].getEntryPoints()[j].diff_value && s.getLayerCollection()[i].getEntryPoints()[j].type == 2)
			{
				if (a.getLevelOfAccess == s.getLayerCollection()[i].getAccess())
				{
					s.getLayerCollection()[i].   ()[j].diff_value = 0;
				}
				printf("%-25d%-25s%-20d\n\n", j + 1, s.getLayerCollection()[i].getEntryPoints()[j].name.c_str(), s.getLayerCollection()[i].getEntryPoints()[j].diff_value);
			}
			else if (a.getSkillLevel().physical > s.getLayerCollection()[i].getEntryPoints()[j].diff_value && s.getLayerCollection()[i].getEntryPoints()[j].type == 1)
			{
				printf("%-25d%-25s%-20d\n\n", j + 1, s.getLayerCollection()[i].getEntryPoints()[j].name.c_str(), s.getLayerCollection()[i].getEntryPoints()[j].diff_value);
			}
		}
		cin >> input;
		r.path.push_back(s.getLayerCollection()[i].getEntryPoints()[input - 1]);
		r.layerNames.push_back(s.getLayerCollection()[i].getName());
	
		if (s.getLayerCollection()[i].getEntryPoints()[input -1].layerLink > i + 1)
		{
			i = s.getLayerCollection()[i].getEntryPoints()[input - 1].layerLink - 1;
		}
	}
	r.difficulty = alg.diff_calc(r.path);
}

vector<route> routeCollection::getRoute() {
	return routes;
}

