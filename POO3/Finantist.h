#pragma once
#include "TrainingProgram.h"
#include "Course.h"
class Finantist : public TrainingProgram{
	Course Matematica;
public:
	Finantist();
	~Finantist();
	float getMateNota();
};

