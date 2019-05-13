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
};
#endif
