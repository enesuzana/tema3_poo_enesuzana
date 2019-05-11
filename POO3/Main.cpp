#include <iostream>
#include "Course.h"
#include "Student.h"
#include "Course.h"
#include "TrainingProgram.h"
#include "ProgramareElem.h"
#include <vector>
using namespace std;

int main() {
	ProgramareElem h;
	h.setPracticGrade(1);
	cout << h.getPracticGrade();
	return 0;
}