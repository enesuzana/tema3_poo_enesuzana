#pragma once
#ifndef STUDENTSTATISTICS_H
#define STUDENTSTATISTICS_H
#include <iostream>
#include <vector>
#include "Student.h"
#include "TrainingProgram.h"
using namespace std;
template <typename T>
class StudentStatistics
{
	int nrStud;
	typename vector<Student<T>> students;
public:
	StudentStatistics(typename vector<Student<T>>, int=10);
	~StudentStatistics();

	void showStatistic();
};
#endif