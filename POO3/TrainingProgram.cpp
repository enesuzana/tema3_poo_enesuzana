#include "TrainingProgram.h"


int TrainingProgram::maxStudents = 10;
TrainingProgram::TrainingProgram()
{		
	Promovat = false;
	Nota = 1;
	Name = "";
}


TrainingProgram::~TrainingProgram()
{
	courses.clear();
}

void TrainingProgram::setNotes(vector<float> notes) {
	note = notes;
}

void TrainingProgram::afisNotes() {
	vector<float>::iterator it;
	for (it = note.begin(); it != note.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void TrainingProgram::setNota(float Nota) {
	this->Nota = Nota;
}

float TrainingProgram::getNota() {
	return Nota;
}

void TrainingProgram::setName(string N) {
	Name = N;
}

string TrainingProgram::getName() {
	return Name;
}

void TrainingProgram::setPromovat() {
	if (Nota >= 5 ) {
		Promovat = true;
	}
	else {
		Promovat = false;
	}
}

bool TrainingProgram::getPromovat() {
	return Promovat;
}

void TrainingProgram::assignGradesToCourses() {
	vector<Course*>::iterator it;
	vector<float>::iterator fl;
	fl = note.begin();
	unsigned int contor = 1;
	for (it = courses.begin(); it != courses.end(); it++) {
		if (contor > note.size()) {
			break;
		} 
		if ((*it)->boolOneEval() == true) {
			(*it)->setOralGrade(*fl);
			fl++;
			contor++;
		}
		else { 
			(*it)->setOralGrade(*fl);
			fl++;
			contor++;
			if (contor > note.size()) {
				break;
			}
			(*it)->setPracticGrade(*fl);
			fl++;
			contor++;
		}
	}
}

void TrainingProgram::setCourses(vector<Course*> v) {
	courses = v;
}

vector<Course*> TrainingProgram::getCourses() {
	return courses;
}

//calculez nota finala in functie de ce curs am
void TrainingProgram::genereazaMediePerCurs() {
	vector<Course*>::iterator it;
	for (it = courses.begin(); it != courses.end(); it++) {
		(*it)->setFinalGrade();
	}
}

void TrainingProgram::setMediaProgram() {
	float sum = 0;
	vector<Course*>::iterator it;
	int imp = courses.size();
	for (it = courses.begin(); it != courses.end(); it++) {
		sum += (*it)->getGrade();
	}
	sum = sum / imp;
	Nota = sum;
}

float TrainingProgram::getMediaProgram() {
	return Nota;
}

void TrainingProgram::GENERATE() {
	assignGradesToCourses();
	genereazaMediePerCurs();
	setMediaProgram();
	setPromovat();
}

bool TrainingProgram::minim3() {
	vector<Course*>::iterator it;
	for (it = courses.begin(); it != courses.end(); it++) {
		if ((*it)->getGrade() < 3) {
			return false;
		}
	}
	return true;
}

int TrainingProgram::getNrCursuri() {
	return (int)courses.size();
}