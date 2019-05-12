#include "Finantist.h"



Finantist::Finantist(float AlgPractic, float AlgOral, float FinancOral){
	Algebra.setOralGrade(AlgOral);
	Algebra.setPracticGrade(AlgPractic);
	Financiar.setOralGrade(FinancOral);
	Algebra.setFinalGrade();
	Financiar.setFinalGrade();
}


Finantist::~Finantist()
{
}

void Finantist::setNote(vector<float> &v) {
	float temp = v.back();
	v.pop_back();
	Algebra.setOralGrade(temp);
	temp = v.back();
	v.pop_back();
	Algebra.setPracticGrade(temp);
	temp = v.back();
	v.pop_back();
	Financiar.setOralGrade(temp);
	Algebra.setFinalGrade();
	Financiar.setFinalGrade();
}

void Finantist::setMedia() {
	float temp = Algebra.getFinalGrade() + Financiar.getFinalGrade();
	temp = temp / 2;
	setNota(temp);
	if (Algebra.getFinalGrade() >= 5 && Financiar.getFinalGrade() >= 5) {
		setPromovat();
	}
}

bool Finantist::minim3() {
	if (Algebra.getFinalGrade() >= 3 && Financiar.getFinalGrade() >= 3) {
		return true;
	}
	return false;
}