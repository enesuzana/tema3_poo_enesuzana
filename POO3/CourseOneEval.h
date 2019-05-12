#pragma once
#include "Course.h"
using namespace std;

class CourseOneEval : public Course
{
	float oralGrade;
public:
	CourseOneEval(float = 0);
	~CourseOneEval();

	void setOralGrade(float);
	float getOralGrade();

	void setFinalGrade();
	float getFinalGrade();

};