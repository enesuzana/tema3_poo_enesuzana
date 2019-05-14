#include "ManagerProgTeam.h"



ManagerProgTeam::ManagerProgTeam()
{
	setName("ManagerProgTeam");
	vector<Course*> temp;
	manager = new Manager();
	Programare = new ProgramareElem();
	Comunicare = new ComunicareNLP();
	temp.push_back(manager);
	temp.push_back(Programare);
	temp.push_back(Comunicare);

	setCourses(temp);
}


ManagerProgTeam::~ManagerProgTeam()
{
	delete Programare;
	delete Comunicare;
}


void ManagerProgTeam::setC() {
	vector<Course*> temp;
	manager = new Manager();
	Programare = new ProgramareElem();
	Comunicare = new ComunicareNLP();
	temp.push_back(manager);
	temp.push_back(Programare);
	temp.push_back(Comunicare);

	setCourses(temp);
}