#include "Skill.h"



Skill::Skill(string Name, float Medie){
	this->Name = Name;
	this->Medie = Medie;
}


Skill::~Skill()
{
}

void Skill::setNivel(){
	if (Medie > 5 && Medie < 7) {
		Nivel = "mic";
	}
	if (Medie >7 && Medie < 9) {
		Nivel = "mediu";
	}
	if (Medie > 8 && Medie <= 10) {
		Nivel = "mare";
	}
}

string Skill::getNivel() {
	return Nivel;
}

void Skill::setName(string Name) {
	this->Name = Name;
}

string Skill::getName() {
	return Name;
}

void Skill::setMedie(float Medie) {
	this->Medie = Medie;
}

float Skill::getMedie() {
	return Medie;
}