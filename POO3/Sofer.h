#ifndef SOFER_H
#define SOFER_H
#pragma once
#include "TrainingProgram.h"
#include "LegislatieAuto.h"
#include "SofatAutoPractic.h"
#include <iostream>
#include <vector>
using namespace std;

class Sofer :public TrainingProgram{
	LegislatieAuto* Legislatie;
	SofatAutoPractic* Sofat;
public:
	Sofer();
	~Sofer();
	void setC();
};
#endif
