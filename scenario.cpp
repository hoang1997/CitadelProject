#include "scenario.h"

void scenario::setLayerCollection() {
	int input;
	int stop = 0;
	int i = 1;
	while (stop !=2)
	{
		cout << "LAYER SETUP:\n1. Add Layer\n2. Finish" << endl;
		cin >> input;
		if (input == 1)
		{
			layer l;

			l.setName();
			l.setEntryPoints();
			l.setAccess();
			l.setAssets();

			layerCollection.push_back(l);
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

vector<layer> scenario::getLayerCollection() {
	return layerCollection;
}

void scenario::printLayers(vector<layer> l) {
	cout << "___________\nEnvironment\n___________" << endl;
	for (int i = 0; i < l.size(); i++)
	{
		cout << "\nLayer " << i + 1 << ":" << l[i].getName() << endl;
		cout << "\nEntry Points:" << endl;
		printf("%-25s%-20s\n", "Name", "Difficulty");
		for (int j = 0; j < l[i].getEntryPoints().size(); j++)
		{
			printf("%-25s%-20d\n", l[i].getEntryPoints()[j].name.c_str(), l[i].getEntryPoints()[j].diff_value);
		}

		if (l[i].getAssets().size() > 0)
		{
			cout << "Assets:" << endl;
			printf("%-15s%-25s%-20s%-20s\n", "Name", "Confidentiality", "Integrity", "Availability");
			for (int j = 0; j < l[i].getAssets().size(); j++)
			{
				printf("%-15s%-25d%-20d%-20d\n", l[i].getAssets()[j].name.c_str(), l[i].getAssets()[j].c, l[i].getAssets()[j].i, l[i].getAssets()[j].a);
			}
		}
	}
}