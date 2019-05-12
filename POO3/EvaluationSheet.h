#pragma once
#ifndef EVALUATIONSHEET_H
#define EVALUATIONSHEET_H
#include "TrainingProgram.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

class EvaluationSheet
{
	string NumeStudent;
	string NumeProgram;
	//ctor<float> note;
public:
	EvaluationSheet();
	~EvaluationSheet();

	void setNume(string);
	string getNume();

	void setProgram(string);
	string getProgram();
};
#endif