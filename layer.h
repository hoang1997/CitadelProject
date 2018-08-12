#pragma once
#include <iostream>
#include <vector>
#include "attacker.h"
using namespace std;

struct obstruction {
	string name;
	int type, position, diff_value, layerLink;
	bool visited = false;
};
struct asset {
	int c, i, a;
	string name;
};

class layer {
private:
	string name;
	vector<obstruction> entryPoints;
	vector<asset> assets;
	int levelOfAccess;
public:
	void setName();
	const string getName();

	void setEntryPoints();
	vector<obstruction> getEntryPoints();

	void setAssets();
	vector<asset> getAssets();

	void setAccess();
	int getAccess();
};