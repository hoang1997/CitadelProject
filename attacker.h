#pragma once

using namespace std;

struct skillLevel {
	int physical;
	int technical;
};
class attacker
{
private:
	string source;
	string actor;
	skillLevel skill;
	string target;
//1 = perimeter access, 2 = building access, 3 = Technical Access, 4 = all access
	int levelOfAccess; 

public:
	void setSource();
	void setActor();
	void setSkill();
	void setTarget();
	void setAccess();

	string getSource();
	string getActor();
	string getTarget();
	int getLevelOfAccess();
	skillLevel getSkillLevel();

};

