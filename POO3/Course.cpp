#include "Course.h"



Course::Course()
{
	finalGrade = 1;
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

void Course::setOralGrade(float grade) {
}

float Course::getOralGrade() {
	return 0;
}

void Course::setPracticGrade(float f) {
	
}

float Course::getPracticGrade() {
	return 0;
}

void Course::setFinalGrade() {
}

float Course::getFinalGrade() {
	return 0;
}

bool Course::boolOneEval() {
	return false;
}