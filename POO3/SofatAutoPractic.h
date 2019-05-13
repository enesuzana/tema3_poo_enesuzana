#ifndef SOFATAUTOPRACTIC_H
#define SOFATAUTOPRACTIC_H
#pragma once
#include<iostream>
#include<string>
#include "Course.h"
using namespace std;

class SofatAutoPractic: public CourseOneEval
{
	string vehicleType;
public:
	AutoDriving(vehicleType = "");
	~AutoDriving();
};
#endif
