
#pragma once
#ifndef STUDENTSTATISTICS_H
#define STUDENTSTATISTICS_H
#include <iostream>
#include <vector>
#include "Student.h"
#include "TrainingProgram.h"
using namespace std;

class StudentStatistics
{
	int nrStud;
	typename vector<Student> students;
public:
	StudentStatistics(typename vector<Student>, int=10);
	~StudentStatistics();

	void showStatistic();
};
#endif
