#pragma once
#ifndef FINANTIST_H
#define FINANTIST_H
#include "TrainingProgram.h"
#include "Course.h"
#include "Algebra.h"
#include "Mathematics.h"
#include "Finances.h"
#include <iostream>
#include <vector>
using namespace std;

class Finantist : public TrainingProgram{
	Mathematics* Algebra;
	Finances* Financiar;
public:
	Finantist();
	~Finantist();
	void setC();

	//void setNote(vector<float>&);
	//bool minim3();
};
#endif
