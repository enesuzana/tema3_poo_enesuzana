#include "Student.h"

Student::Student(string Nume, string Program)
{
	this->Nume = Nume;
	fisa.setNume(Nume);
	fisa.setProgram(Program);

}


Student::~Student()
{
}

string Student::getNume() {
	return Nume;
}

void Student::setNume(string Nume) {
	this->Nume = Nume;
}

void Student::setTrainingProgram(string Program) {
	program.setName(Program);
}

string Student::getTrainingProgram() {
	return program.getName();
}

void Student::setTrainingNota(float Nota) {
	program.setNota(Nota);
}

float Student::getTrainingNota() {
	return program.getNota();
}

void Student::addSkill(Skill skill) {
	if (promovat == true) {
		skill(program.getName, Medie);
		Competente.push_back(skill);
	}
}

float Student::getMedie() {
	program.getNota();
}

void Student::setMedie(float Medie) {
	this->Medie = Medie;
}

bool Student::promovat() {
	return program.promovat();
}