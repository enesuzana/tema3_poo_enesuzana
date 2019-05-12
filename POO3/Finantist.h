#pragma once
#ifndef FINANTIST_H
#define FINANTIST_H
#include "TrainingProgram.h"
#include "Course.h"
#include "Algebra.h"
#include "Mathematics.h"
#include "Finances.h"
#include <iostream>
using namespace std;

class Finantist : public TrainingProgram{
	Mathematics Algebra;
	Finances Financiar;
public:
	Finantist();
	~Finantist();

	void Media();
};
#endif
