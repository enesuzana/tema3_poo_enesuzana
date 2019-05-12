#pragma once
#include <string>
using namespace std; 

class TrainingProgram
{
	static int maxStudents;
	float Nota;
	string Name;
	
public:
	TrainingProgram();
	~TrainingProgram();

	void setNota(float);
	float getNota();

	void setName(string);
	string getName();
};

