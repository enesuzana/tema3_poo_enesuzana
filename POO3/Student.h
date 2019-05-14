#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>
#include "Skill.h"
#include "TrainingProgram.h"
#include "EvaluationSheet.h"
#include <vector>
using namespace std;

template <typename T>
class Student
{
	EvaluationSheet fisa;
	vector<Skill> Competente;
	string Nume;
	T program;
	vector<float> note;
	float Medie;
public:
	Student(string, string, vector<float>);
	Student();
	~Student();

	string getNume();
	void setNume(string);

	void setTrainingProgram(string);
	string getTrainingProgram();

	void setTrainingNota(float);
	float getTrainingNota();

	void addSkills();
	void showSkills();

	float getMedie();
	void setMedie(float);

	bool getPromovat();
	void setProgram();

	float getNotaFinala();

	void setProgramNotes(vector<float>);

	bool poateRefaceProg();
	friend class StudentStatistics;
};
#endif