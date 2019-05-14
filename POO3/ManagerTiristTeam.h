#ifndef MANAGERTIRISTTEAM_H
#define MANAGERTIRISTTEAM_H
#pragma once
#include "TrainingProgram.h"
#include "ForeignLanguage.h"
#include "Manager.h"
#include "LegislatieAuto.h"
#include <iostream>
#include <vector>
using namespace std;

class ManagerTiristTeam:
	public TrainingProgram
{
	ForeignLanguage* LimbaTurca;
	Manager* manager;
	LegislatieAuto* legislatie;
public:
	ManagerTiristTeam();
	~ManagerTiristTeam();

	void setC();
};
#endif
