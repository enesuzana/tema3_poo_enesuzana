#include "ComunicareNLP.h"



ComunicareNLP::ComunicareNLP()
{
	eliminaNotaCeaMaiMica();
}


ComunicareNLP::~ComunicareNLP()
{
}

void ComunicareNLP::eliminaNotaCeaMaiMica() {
	float nota1 = getOralGrade();
	float nota2 = getPracticGrade();
	if (nota1 < nota2) {
		setOralGrade(nota2); // eliminam nota cea mai mica
	}
	else {
		setPracticGrade(nota1);
	}
}