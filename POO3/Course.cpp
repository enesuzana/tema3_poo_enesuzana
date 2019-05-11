#include "Course.h"



Course::Course()
{
}


Course::~Course()
{
}

void Course::setGrade(float grade) {
	finalGrade = grade;
}

float Course::getGrade() {
	return finalGrade;
}