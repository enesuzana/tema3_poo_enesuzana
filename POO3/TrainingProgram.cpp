#include "TrainingProgram.h"


int TrainingProgram::maxStudents = 10;
TrainingProgram::TrainingProgram()
{
	Promovat = false;
	Nota = 0;
	Name = "";
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

void TrainingProgram::setName(string Name) {
	this->Name = Name;
}

string TrainingProgram::getName() {
	return Name;
}

void TrainingProgram::setPromovat() {
	if (Nota >= 5 ) {
		Promovat = true;
	}
	else {
		Promovat = false;
	}
}

bool TrainingProgram::getPromovat() {
	return Promovat;
}