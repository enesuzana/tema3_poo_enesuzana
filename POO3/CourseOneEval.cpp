#include "CourseOneEval.h"



CourseOneEval::CourseOneEval(float oralGrade)
{
	this->oralGrade = oralGrade;
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

void CourseOneEval::setFinalGrade(float grade) {
	setGrade(oralGrade);
}

float CourseOneEval::getFinalGrade() {
	return getGrade();
}