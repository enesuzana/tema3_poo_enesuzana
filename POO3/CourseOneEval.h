#pragma once
#include "Course.h"
using namespace std;

class CourseOneEval : public Course
{
	float oralGrade;
	float practicGrade;
public:
	CourseOneEval(float = 0);
	~CourseOneEval();

	void setOralGrade(float);
	float getOralGrade();

	void setPracticGrade(float = -1);
	float getPracticGrade();

	void setFinalGrade();
	float getFinalGrade();

	bool boolOneEval();

};