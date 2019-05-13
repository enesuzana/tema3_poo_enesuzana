#include "Manager.h"



Manager::Manager(float ResUmane, float Financ, float LimbaEng) {
	ResurseUmane.setOralGrade(ResUmane);
	LimbaEngleza.setOralGrade(LimbaEng);
	Financiar.setOralGrade(Financ);
	ResurseUmane.setFinalGrade();
	Financiar.setFinalGrade();
	LimbaEngleza.setFinalGrade();
}


Manager::~Manager()
{
}

void Manager::setNote(vector<float>& v) {
	float temp = v.back();
	v.pop_back();
	ResurseUmane.setOralGrade(temp);
	temp = v.back();
	v.pop_back();

	LimbaEngleza.setOralGrade(temp);
	temp = v.back();
	v.pop_back();

	Financiar.setOralGrade(temp);

	ResurseUmane.setFinalGrade();
	Financiar.setFinalGrade();
	LimbaEngleza.setFinalGrade();
}

void Manager::setMedia() {
	float temp = ResurseUmane.getFinalGrade() + Financiar.getFinalGrade() + LimbaEngleza.getFinalGrade();
	temp = temp / 3;
	setNota(temp);
	if (ResurseUmane.getFinalGrade() >= 5 && Financiar.getFinalGrade() >= 5) {
		if (LimbaEngleza.getFinalGrade() >= 5) {
			setPromovat();
		}
	}
}

bool Manager::minim3() {
	if (ResurseUmane.getFinalGrade() >= 3 && Financiar.getFinalGrade() >= 3) {
		if (LimbaEngleza.getFinalGrade() >= 3) {
			return true;
		}
	}
	return false;
}