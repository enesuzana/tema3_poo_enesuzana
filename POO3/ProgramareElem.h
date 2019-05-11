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

