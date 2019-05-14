#pragma once
#ifndef TRAININGPROGRAM_H
#define TRAININGPROGRAM_H
#include <string>
#include <vector>
#include <iostream>
#include "Course.h"
using namespace std; 

class TrainingProgram
{
	static int maxStudents;
	float Nota;
	string Name;
	bool Promovat;
	vector<Course*> courses;
	vector<float> note;
public:
	TrainingProgram(vector<float>);
	TrainingProgram();
	~TrainingProgram();

	void setNotes(vector<float>note);
	void afisNotes();

	void setNota(float);
	float getNota();

	void setName(string);
	string getName();

	void setPromovat();
	bool getPromovat();

	void assignGradesToCourses(); //atribuie fiecarui curs o nota, practic+oral unde e cazul

	void setCourses(vector<Course*>); //seteaza cursurile programului
	vector<Course*> getCourses(); //returneaza cursurile programului
	void genereazaMediePerCurs(); //calculeaza media finala a fiecarui curs

	void setMediaProgram(); // calc media Programului intreg
	float getMediaProgram(); //o returneaza

	void GENERATE(); //aplica functiile de mai sus ca sa obtina rez
					  //o sa avem media fiecarui curs si media programului setata
	bool minim3(); //minim 3 la toate cursurile
	int getNrCursuri();
};
#endif
