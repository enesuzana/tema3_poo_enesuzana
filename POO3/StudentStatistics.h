/*
#pragma once
#ifndef STUDENTSTATISTICS_H
#define STUDENTSTATISTICS_H
#include <iostream>
#include <vector>
#include "Student.h"
#include "Programator.h"
#include "Finantist.h"
#include "TrainingProgram.h"
using namespace std;

class StudentStatistics
{
	int nrStud;
	Student<TrainingProgram> s[3];;

public:
	StudentStatistics(Student<TrainingProgram> s[], int=10);
	~StudentStatistics();

	void showStatistic();
};
#endif
*/