#include "Sofer.h"

Sofer::Sofer() {
	setName("Sofer");
	vector<Course*> temp;
	Legislatie = new LegislatieAuto();
	Sofat = new SofatAutoPractic();
	temp.push_back(Legislatie);
	temp.push_back(Sofat);

	setCourses(temp);
}

Sofer::~Sofer() {
	delete Legislatie;
	delete Sofat;
}

void Sofer::setC() {
	vector<Course*> temp;
	temp.push_back(Legislatie);
	temp.push_back(Sofat);

	setCourses(temp);
}