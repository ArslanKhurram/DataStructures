#include "pch.h"
#include "Surgeon.h"

//default constructor 
Surgeon::Surgeon()
{
	m_specialty = "NO_SPECIALTY";
}

//constructor with parameters
Surgeon::Surgeon(string specialty, string surgName, string surgLocation, int surgYearsInPractice)
	:Doctor(surgName, surgLocation, surgYearsInPractice)		//inheritance of data from Doctor class
{
	m_specialty = specialty;
}

//deconstructor
Surgeon::~Surgeon()
{
}

string Surgeon::GetSpecialty() { return m_specialty; } 

void Surgeon::SetSpecialty(string newSpecialty) { m_specialty = newSpecialty; }

void Surgeon::ShowSurg() //function to output data
{
	cout << left << setw(20) << "Years in Practice: " << m_yearsInPractice << endl; //inherited data 
	cout <<  left << setw(20) <<"Specialty: " << m_specialty << endl; //local data
}