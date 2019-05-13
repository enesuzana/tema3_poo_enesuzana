#ifndef PROGRAMAREELEM_H
#define PROGRAMAREELEM_H
#include <string>
#pragma once
#include "CourseBothEval.h"
using namespace std;

class ProgramareElem: public CourseBothEval
{
	bool oop;
	string language;
public:
	ProgramareElem(bool=false, string="c++");
	~ProgramareElem();

};
#endif