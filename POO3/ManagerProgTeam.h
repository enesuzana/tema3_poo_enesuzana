#pragma once
#ifndef MANAGERPROGTEAM_H
#define MANAGERPROGTEAM_H
#include "TrainingProgram.h"
#include "Manager.h"
#include "ProgramareElem.h"
#include "ComunicareNLP.h"
#include <iostream>
#include <vector>
using namespace std;

class ManagerProgTeam:public TrainingProgram{
	Manager* manager;
	ProgramareElem* Programare;
	ComunicareNLP* Comunicare;
public:
	ManagerProgTeam();
	~ManagerProgTeam();
	void setC();
};
#endif
