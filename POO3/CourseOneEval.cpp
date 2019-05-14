#include "CourseOneEval.h"

CourseOneEval::CourseOneEval(float oralGrade)
{
	this->oralGrade = oralGrade;
	practicGrade = -1;
}


CourseOneEval::~CourseOneEval()
{
}

void CourseOneEval::setOralGrade(float grade) {
	oralGrade = grade;
}

float CourseOneEval::getOralGrade() {
	return oralGrade;
}

void CourseOneEval::setPracticGrade(float f) {
	practicGrade = f;
}

float CourseOneEval::getPracticGrade() {
	return practicGrade;
}

void CourseOneEval::setFinalGrade() {
	setGrade(oralGrade);
}

float CourseOneEval::getFinalGrade() {
	return getGrade();
}

bool CourseOneEval::boolOneEval() {
	return true;
}