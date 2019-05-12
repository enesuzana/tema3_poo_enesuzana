#pragma once
#ifndef TRAININGPROGRAM_H
#define TRAININGPROGRAM_H
#include <string>
#include <iostream>
using namespace std; 

class TrainingProgram
{
	static int maxStudents;
	float Nota;
	string Name;
	bool Promovat;
public:
	TrainingProgram();
	~TrainingProgram();

	void setNota(float);
	float getNota();

	void setName(string);
	string getName();

	void setPromovat();
	bool getPromovat();

};
#endif
