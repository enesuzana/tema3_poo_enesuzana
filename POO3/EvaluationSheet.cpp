#include "EvaluationSheet.h"

EvaluationSheet::EvaluationSheet()
{
	NumeStudent = "";
	NumeProgram = "";
}


EvaluationSheet::~EvaluationSheet()
{
}

void EvaluationSheet::setNume(string Nume) {
	NumeProgram = Nume;
}

string EvaluationSheet::getNume() {
	return NumeProgram;
}

void EvaluationSheet::setProgram(string Program) {
	NumeProgram = Program;
}

string EvaluationSheet::getProgram() {
	return NumeProgram;
}