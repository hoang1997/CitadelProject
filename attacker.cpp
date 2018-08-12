#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "attacker.h"

using namespace std;

void attacker::setSource() {
	cout << "Please enter the source" << endl;
	cin >> source;
}

void attacker::setActor() {
	cout << "Please enter the attacker type" << endl;
	cin >> actor;
}

void attacker::setTarget() {
	cout << "Please enter the attackers target" << endl;
	cin >> target;
}

void attacker::setSkill() {
	cout << "Please enter the attackers skill level:" << endl;
	cout << "Physical: ";
	cin >> skill.physical;
	cout << "Technical: ";
	cin >> skill.technical;
}

void attacker::setAccess() {

	cout << "What type of access does the attacker have?\n1. No Access\n2. Perimeter access\n3. Building access\n4. Technical Access\n5. All Access" << endl;
	cin >> levelOfAccess;
}

string attacker::getSource() {
	return source;
}

string attacker::getActor() {
	return actor;
}

string attacker::getTarget() {
	return target;
}

skillLevel attacker::getSkillLevel() {
	return skill;
}

int attacker::getLevelOfAccess() {
	return levelOfAccess;
}

