#include "Finantist.h"



Finantist::Finantist()
{
	setName("Finantist");
	vector<Course*> temp;
	Algebra = new Mathematics();
	Financiar = new Finances();
	temp.push_back(Algebra);
	temp.push_back(Financiar);

	setCourses(temp);
}

Finantist::~Finantist()
{
	delete Algebra;
	delete Financiar;
}

void Finantist::setC() {
	vector<Course*> temp;
	temp.push_back(Algebra);
	temp.push_back(Financiar);

	setCourses(temp);
}


/**
bool Finantist::minim3() {
	if (Algebra.getFinalGrade() >= 3 && Financiar.getFinalGrade() >= 3) {
		return true;
	}
	return false;
}
*/