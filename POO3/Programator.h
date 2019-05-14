#ifndef PROGRAMATOR_H
#define PROGRAMATOR_H
#pragma once
#include "TrainingProgram.h"
#include "Mathematics.h"
#include "ProgramareElem.h"
#include "ForeignLanguage.h"
#include <iostream>
#include <vector>
using namespace std;

class Programator:public TrainingProgram{
	Mathematics* Algebra;
	Mathematics* Analiza;
	Mathematics* Geometrie;
	ProgramareElem* Programare;
	ForeignLanguage* LimbaEng;
public:
	Programator();
	~Programator();
	void setC();
};
#endif
