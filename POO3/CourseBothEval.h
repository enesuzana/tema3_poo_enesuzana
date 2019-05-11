#pragma once
#include "Course.h"
using namespace std;
class CourseBothEval: public Course
{	float oralGrade;
	float practicGrade;
public:
	CourseBothEval(float = 0, float = 0);
	~CourseBothEval();

	void setOralGrade(float);
	float getOralGrade();

	void setPracticGrade(float);
	float getPracticGrade();

	void setFinalGrade(float);
	float getFinalGrade();
};
