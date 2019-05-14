#include "CourseBothEval.h"



CourseBothEval::CourseBothEval(float oralGrade, float practicGrade)
{
	this->oralGrade = oralGrade;
	this->practicGrade = practicGrade;
}


CourseBothEval::~CourseBothEval()
{
}

void CourseBothEval::setOralGrade(float grade) {
	oralGrade = grade;
}

float CourseBothEval::getOralGrade() {
	return oralGrade;
}

void CourseBothEval::setPracticGrade(float grade) {
	practicGrade = grade;
}

float CourseBothEval::getPracticGrade() {
	return practicGrade;
}

void CourseBothEval::setFinalGrade() {
	float temp = (oralGrade + practicGrade) / 2;
	setGrade(temp);
}

float CourseBothEval::getFinalGrade() {
	return getGrade();
}

bool CourseBothEval::boolOneEval() {
	return false;
}