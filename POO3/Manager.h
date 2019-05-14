#ifndef MANAGER_H
#define MANAGER_H
#pragma once
#include "TrainingProgram.h"
#include "HumanResources.h"
#include "Finances.h"
#include "ForeignLanguage.h"
#include <iostream>
using namespace std;

class Manager :public TrainingProgram{
	//HumanResources ResurseUmane;
	//Finances Financiar;
	//ForeignLanguage LimbaEngleza;
public:
	Manager();
	~Manager();
};
#endif