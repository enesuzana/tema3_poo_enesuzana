#include "Manager.h"



Manager::Manager() {
	setName("Manager");
	vector<Course*> temp;
	ResurseUmane = new HumanResources();
	Financiar = new Finances();
	LimbaEngleza = new ForeignLanguage();
	temp.push_back(ResurseUmane);
	temp.push_back(Financiar);
	temp.push_back(LimbaEngleza);

	setCourses(temp);
}

Manager::~Manager()
{
	delete ResurseUmane;
	delete Financiar;
	delete LimbaEngleza;
}


void Manager::setC() {
	vector<Course*> temp;
	ResurseUmane = new HumanResources();
	Financiar = new Finances();
	LimbaEngleza = new ForeignLanguage();
	temp.push_back(ResurseUmane);
	temp.push_back(Financiar);
	temp.push_back(LimbaEngleza);

	setCourses(temp);
}