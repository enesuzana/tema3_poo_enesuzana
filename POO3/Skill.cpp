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