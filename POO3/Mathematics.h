#ifndef MATHEMATICS_H
#define MATHEMATICS_H
#pragma once
#include "CourseBothEval.h"
using namespace std;

class Mathematics: public CourseBothEval
{
	bool Algebra;
	bool Geometrie;
	bool Analiza;
public:
	Mathematics(bool = false, bool = false, bool = false);
	~Mathematics();
};
#endif