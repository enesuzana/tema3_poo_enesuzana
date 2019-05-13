#ifndef COURSEBOTHEVAL_H
#define COURSEBOTHEVAL_H
#pragma once
#include "Course.h"
using namespace std;
class CourseBothEval: public Course
{	float oralGrade;
	float practicGrade;
public:
	CourseBothEval(float = 1, float = 1);
	~CourseBothEval();

	void setOralGrade(float);
	float getOralGrade();

	void setPracticGrade(float);
	float getPracticGrade();

	void setFinalGrade();
	float getFinalGrade();
};
#endif