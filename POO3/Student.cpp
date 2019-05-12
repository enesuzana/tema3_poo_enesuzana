#include "Student.h"
template <typename T>
Student<T>::Student(string Nume, string Program)
{
	Medie = 0;
	this->Nume = Nume;
	fisa.setNume(Nume);
	fisa.setProgram(Program);
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
void Student<T>::addSkill() {
	Skill skill(program.getName(), Medie);
	if (program.getPromovat()== true){
		Competente.push_back(skill);
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