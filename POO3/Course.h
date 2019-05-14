#pragma once
#ifndef COURSE_H
#define COURSE_H
#include <iostream>
using namespace std;

class Course
{
	float finalGrade;
public:
	Course();
	~Course();
	void setGrade(float);
	float getGrade();
	virtual void setOralGrade(float);
	virtual float getOralGrade();
	virtual void setPracticGrade(float);
	virtual float getPracticGrade();
	virtual void setFinalGrade();
	virtual float getFinalGrade();
	virtual bool boolOneEval();
};
#endif
