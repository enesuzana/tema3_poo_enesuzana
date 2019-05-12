#pragma once
#ifndef SKILL_H
#define SKILL_H
#include <string>
#include <iostream>

using namespace std;
class Skill
{
	string Nivel;
	string Name;
	float Medie;
public:
	Skill(string = "a", float = 0);
	~Skill();
	void setNivel();
	string getNivel();

	void setName(string);
	string getName();

	void setMedie(float);
	float getMedie();
	
	void operator=(Skill&);
};
#endif
