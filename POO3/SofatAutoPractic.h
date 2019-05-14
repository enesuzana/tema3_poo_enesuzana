#ifndef SOFATAUTOPRACTIC_H
#define SOFATAUTOPRACTIC_H
#pragma once

#include<iostream>
#include<string>
#include "CourseOneEval.h"
using namespace std;

class SofatAutoPractic: public CourseOneEval
{
	string vehicleType;
public:
	SofatAutoPractic(string="");
	~SofatAutoPractic();
};
#endif // !SOFATAUTOPRACTIC_H
