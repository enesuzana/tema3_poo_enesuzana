#pragma once
#include "TrainingProgram.h"
#include "Course.h"
#include "Algebra.h"
#include "Mathematics.h"
#include "Finances.h"

class Finantist : public TrainingProgram{
	Mathematics Algebra;
	Finances Financiar;
public:
	Finantist();
	~Finantist();

	void Media();
};

