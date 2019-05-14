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

template<typename TT>
void studenti(Student<TT> s[]) {
	cout << "Cati studenti?";
	int n;
	cin >> n;
	float nota;
	string program;
	string nume;
	vector<float> v;
	int stop = 0;
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "-ul student" << endl;
		for (int j = 0; j <= s[i].getNrCursuri(); j++) {
			cout << "Introduceti nota: ";
			cin >> nota;
			v.push_back(nota);
		}
		cout << endl << "Ce nume student?";
		cin >> program;
		cout << endl << "Ce program de Training?";
		cin >> nume;;
		s[i](nume, program, v);
		cout << endl << "Media lui este " << s[i].getMedie() << endl;
		s[i].showSkills();
		v.clear();
		//stop = 0;
	}
}

int main() {

	Student<Finantist> s[2];
	studenti(s);
	
	//Student<Finantist> s("Suzi", "Financist", v);
	//s[0].showSkills();
	//Student<Manager> t("Gigel", "Manager", v);
	//t.showSkills();
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