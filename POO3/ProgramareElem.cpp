#include "ProgramareElem.h"
#include <string>

ProgramareElem::ProgramareElem(bool oop, string language):
	CourseBothEval()
{
	this->oop = oop;
	this->language = language;
}


ProgramareElem::~ProgramareElem()
{
}
