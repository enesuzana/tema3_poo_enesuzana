#include "Student.h"
template <typename T>
Student<T>::Student(string Nume, string Program)
{
	this->Nume = Nume;
	fisa.setNume(Nume);
	fisa.setProgram(Program);
	program.setName(Program);
	NumeProgram = Program;
}

template <typename T>
Student<T>::~Student()
{
}

template <typename T>
string Student<T>::getNume() {
	return Nume;
}

template <typename T>
void Student<T>::setNume(string Nume) {
	this->Nume = Nume;
}

template <typename T>
void Student<T>::setTrainingProgram(string Program) {
	program.setName(Program);
}

template <typename T>
string Student<T>::getTrainingProgram() {
	return program.getName();
}

template <typename T>
void Student<T>::setTrainingNota(float Nota) {
	program.setNota(Nota);
}

template <typename T>
float Student<T>::getTrainingNota() {
	return program.getNota();
}

template <typename T>
void Student<T>::addSkills() {
	Skill skill(program.getName(), program.getNota());
	if (program.getPromovat()== true){
		Competente.push_back(skill);
	}
}

template <typename T>
void Student<T>::showSkills() {
	vector<Skill> temp;
	temp = Competente;
	Skill t;
	while (!temp.empty()) {
		t = temp.back();
		cout << endl << "Skill = " << t.getName() << "------";
		cout << "Competenta = " << t.getNivel() << endl;
		temp.pop_back();
	}
}

template <typename T>
float Student<T>::getMedie() {
	return	program.getNota();
}

template <typename T>
void Student<T>::setMedie(float Medie) {
	this->Medie = Medie;
}

template <typename T>
bool Student<T>::getPromovat(){
	return program.getPromovat();
}

template <typename T>
void Student<T>::setProgram() {

}

template <typename T>
float Student<T>::getNotaFinala() {
	program.setMedia();
	addSkills();
	return program.getNota();
}

template <typename T>
void Student<T>::setProgramNotes(vector<float> &note) {
	program.setNote(note);
}

template <typename T>
bool Student<T>::poateRefaceProg() {
	return program.minim3();
}