#pragma once
#include <string>
#include "Skill.h"
#include <vector>
using namespace std;

class Student
{
	vector<Skill> Competente;
	string Nume;
public:
	Student(string="s");
	~Student();

	string getNume();

	void addSkill(Skill);
};

