
#include "StudentStatistics.h"



StudentStatistics::StudentStatistics(vector<Student> s, int nr){
	students = s;
	nrStud = nr;
}


StudentStatistics::~StudentStatistics()
{
}


void StudentStatistics::showStatistic() {
	typename vector<Student>::iterator it;
	for (it = students.begin(); it != students.end(); it++) {
		(*it)->showSkills();
	}
}
