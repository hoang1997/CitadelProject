#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
#include "layer.h"
using namespace std;

void layer::setName() {

	system("CLS");
	cout << "LAYER SETUP:\n\nLayers Name:" << endl;

	cin >> name;

	system("CLS");
}

void layer::setEntryPoints() {
	obstruction o;
	int input;
	int stop = 0;
	int i = 1;
	while (stop != 2)
	{
		cout << "ENTRY POINTS SETUP:\n1. Add Entry Point\n2. Quit\n" << endl;
		cin >> input;
		if (input == 1)
		{
			system("CLS");
			cout << "ENTRY POINTS SETUP:\n\nEntry Point "<< i <<"\nName:" << endl;
			cin.ignore();
			getline(cin, o.name);
	
			cout << "\nType:\n1. Physical\n2. Technical" << endl;
			cin >> o.type;

			cout << "\nPosition:\n1. Front\n2. Back\n\nl3. Left\n4. Right\n\n5. Ceiling\n6. Floor" << endl;
			cin >> o.position;
		
			cout << "\nDiffculty Value:" << endl;
			cin >> o.diff_value;

			cout << "Layer Link: " << endl;
			cin >> o.layerLink;

			entryPoints.push_back(o);

			system("CLS");
		}
		else if (input == 2)
		{
			system("CLS");
			stop = 2;
			break;
		}
		i++;
	}
}

void layer::setAccess() {
	
	cout << "LAYER SETUP:" << endl;
	cout << "Please set the access needed for the layer:\n\n1. No Access\n2. Perimeter Access\n3. Building Access\n4. Technical Access\n5. All Access\n" << endl;
	cin >> levelOfAccess;
	system("CLS");
}

void layer::setAssets() {
	asset a;
	int input;

	while (true)
	{
		cout << "LAYER SETUP:\nAdd Asset\n1. Yes\n2. No" << endl;
		cin >> input;
		if (input == 1)
		{
			cout << "Asset\n\nName:" << endl;
			cin >> a.name;
			cout << "\nConfidentiality Value: ";
			cin >> a.c;
			cout << "\nIntegrity Value: ";
			cin >> a.i;
			cout << "\nAvailability Value: ";
			cin >> a.a;

			assets.push_back(a);
			system("CLS");
		}
		else if (input == 2)
		{
			break;
		}
	}
}

const string layer::getName() {
	return name;
}

vector<obstruction> layer::getEntryPoints() {
	return entryPoints;
}

int layer::getAccess() {
	return levelOfAccess;
}

vector<asset> layer::getAssets() {
	return assets;
}




