#include "Programator.h"



Programator::Programator()
{
	setName("Programator");
	vector<Course*> temp;
	Algebra = new Mathematics();
	Analiza = new Mathematics();
	Geometrie = new Mathematics();
	Programare = new ProgramareElem();
	LimbaEng = new ForeignLanguage();
	temp.push_back(Algebra);
	temp.push_back(Analiza);
	temp.push_back(Geometrie);
	temp.push_back(Programare);
	temp.push_back(LimbaEng);

	setCourses(temp);
}


Programator::~Programator()
{
	delete Algebra;
	delete Analiza;
	delete Geometrie;
	delete Programare;
	delete LimbaEng;
}

void Programator::setC() {
	vector<Course*> temp;
	Algebra = new Mathematics();
	Analiza = new Mathematics();
	Geometrie = new Mathematics();
	Programare = new ProgramareElem();
	LimbaEng = new ForeignLanguage();
	temp.push_back(Algebra);
	temp.push_back(Analiza);
	temp.push_back(Geometrie);
	temp.push_back(Programare);
	temp.push_back(LimbaEng);

	setCourses(temp);
}