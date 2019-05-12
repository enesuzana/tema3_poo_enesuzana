#include "Finantist.h"



Finantist::Finantist()
{
	Algebra.setFinalGrade(9);
	Financiar.setFinalGrade(10);
}


Finantist::~Finantist()
{
}

void Finantist::Media() {
	float temp = Algebra.getFinalGrade() + Financiar.getFinalGrade();
	temp = temp / 2;

}