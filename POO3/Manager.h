#ifndef MANAGER_H
#define MANAGER_H
#pragma once
#include "TrainingProgram.h"
#include "HumanResources.h"
#include "Finances.h"
#include "ForeignLanguage.h"
#include "Course.h"
#include <iostream>
#include <vector>
using namespace std;

class Manager :public TrainingProgram, public Course{
	HumanResources* ResurseUmane;
	Finances* Financiar;
	ForeignLanguage* LimbaEngleza;
public:
	Manager();
	~Manager();
	void setC();
};
#endif