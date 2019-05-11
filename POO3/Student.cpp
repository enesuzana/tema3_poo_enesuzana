#include "Student.h"

Student::Student(string Nume)
{
	this->Nume = Nume;
}


Student::~Student()
{
}

string Student::getNume() {
	return Nume;
}

void Student::addSkill(Skill skill) {
	Competente.push_back(Skill);
}