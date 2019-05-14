#include <iostream>
#include "Course.h"
#include "Student.h"
#include "Manager.h"
#include "ManagerProgTeam.h"
#include "ManagerTiristTeam.h"
#include "Sofer.h"
#include "Programator.h"
#include "Course.h"
#include "TrainingProgram.h"
#include "ProgramareElem.h"
#include "Finantist.h"
#include "Student.cpp"
#include "StudentStatistics.h"
#include "StudentStatistics.cpp"
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<float> v;
	v.push_back(10);
	v.push_back(10);
	v.push_back(7);
	Student<Finantist> s("Suzi", "Financist", v);
	s.showSkills();
	Student<Manager> t("Gigel", "Manager", v);
	t.showSkills();
	//vector<Student<Finantist>> vect;
	//s.setProgramNotes(v);
	//cout << s.getNotaFinala();
	//cout << endl << "Promovat=" << s.getPromovat() << endl;
	//s.showSkills();


	//vect.push_back(s);
	//StudentStatistics<Finantist> stats(vect, 1);
	//stats.showStatistic();
	return 0;
}