#pragma once
#include <string>
#include "Skill.h"
#include "EvaluationSheet.h"
#include "TrainingProgram.h"
#include <vector>
using namespace std;

class Student
{
	vector<Skill> Competente;
	string Nume;
	//EvaluationSheet fisa;
	TrainingProgram program;
	float Nota;
public:
	Student(string="s");
	~Student();

	string getNume();
	void setNume(string);

	void setTrainingProgram(string);
	string getTrainingProgram();

	void setTrainingNota(float);
	float getTrainingNota();

	void addSkill(Skill);
};

