/*
#include "StudentStatistics.h"


template <typename T>
StudentStatistics<T>::StudentStatistics(vector<Student<T>> s, int nr){
	nrStud = nr;
	for (int i = 0; i < nrStud; i++) {
		students = s;
	}
}

template <typename T>
StudentStatistics<T>::~StudentStatistics()
{
}

template <typename T>
void StudentStatistics<T>::showStatistic() {
	typename vector<Student<T>>::iterator it;
	for (it = students.begin(); it != students.end(); it++) {
		it->showSkills();
	}
}
*/