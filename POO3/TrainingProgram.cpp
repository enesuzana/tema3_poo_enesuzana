#include "TrainingProgram.h"


int TrainingProgram::maxStudents = 10;
TrainingProgram::TrainingProgram()
{
	Nota = 0;
}


TrainingProgram::~TrainingProgram()
{
}

void TrainingProgram::setNota(float Nota) {
	this->Nota = Nota;
}

float TrainingProgram::getNota() {
	return Nota;
}