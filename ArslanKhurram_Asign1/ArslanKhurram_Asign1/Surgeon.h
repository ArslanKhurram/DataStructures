#pragma once
#include "Doctor.h"

class Surgeon :public Doctor //doctor is base class
{
private:
	string m_specialty;
public:
	Surgeon(); //default constructor
	Surgeon(string specialty, string surgName, string surgLocation, int surgYearsInPractice); //constructor with parameters
	~Surgeon(); //deconstructor

	string GetSpecialty();

	void SetSpecialty(string newSpecialty);

	void ShowSurg();  //function to output data into console 

};

