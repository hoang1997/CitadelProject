#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include "attacker.h"
#include "algorithms.h"
#include "scenario.h"
#include "route_setup.h"
//#include "environment.cpp"

using namespace std;

int main()
{

	char input;
	attacker *a = new attacker;
	scenario *s = new scenario;
	routeCollection routeArr;
	char stop = 's';

	while(stop != 'q')
	{
		cout << "__________________\n\nWelcome to Citadel\n__________________\n\nWhat Would You Like To Do?\nPlease enter one of the options.\n\n1. Set Attacker\n2. Set Environment\n3. Set Routes\nQ. Quit Application" << endl;
		cin >> input;
		switch (input) 
		{
		case '1':
			system("CLS");
			a->setSource();
			a->setActor();
			a->setAccess();
			a->setSkill();
			a->setTarget();
			//a.setMethods();
			break;

		case '2':
			system("CLS");
			s->setLayerCollection();

			s->printLayers(s->getLayerCollection());
			break;
		
		case '3':
			routeArr.createRouteArr(*s, *a);

			routeArr.printRouteCollection(routeArr.getRouteArr());
			break;
		case 'q':
			stop = 'q';
			break;
		default: 
			cout << "ERROR: Input Mismatch\n\nPlease enter a valid option " << endl;
			system("pause");
			system("CLS");
			break;
		}
	}

	system("pause");

	return 0;
}