#include "ManagerTiristTeam.h"



ManagerTiristTeam::ManagerTiristTeam()
{
	setName("ManagerTiristTeam");
	vector<Course*> temp;
	LimbaTurca = new ForeignLanguage();
	manager = new Manager();
	legislatie = new LegislatieAuto();
	temp.push_back(LimbaTurca);
	temp.push_back(manager);
	temp.push_back(legislatie);

	setCourses(temp);
}




ManagerTiristTeam::~ManagerTiristTeam()
{
	delete LimbaTurca;
	delete manager;
	delete legislatie;
}

void ManagerTiristTeam::setC() {
	vector<Course*> temp;
	LimbaTurca = new ForeignLanguage();
	manager = new Manager();
	legislatie = new LegislatieAuto();
	temp.push_back(LimbaTurca);
	temp.push_back(manager);
	temp.push_back(legislatie);

	setCourses(temp);
}
