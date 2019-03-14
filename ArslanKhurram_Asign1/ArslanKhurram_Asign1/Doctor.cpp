#include "pch.h"
#include <string>
#include "Doctor.h"

//default constructor
Doctor::Doctor()
{
	m_name = "NO_NAME";
	m_location = "NO_LOCATION";
	m_yearsInPractice = 0;
}

//constructor with parameters
Doctor::Doctor(string name, string location, int yearsInPractice)
{
	m_name = name;
	m_location = location;
	m_yearsInPractice = yearsInPractice;
}

//deconstructor 
Doctor::~Doctor()
{
}

string Doctor::GetDocName() { return m_name; }
string Doctor::GetDocLocation() { return m_location; }
int Doctor::GetYearsInPractice() { return m_yearsInPractice; }

void Doctor::SetDocName(string newName) { m_name = newName; }
void Doctor::SetDocLocation(string newLocation) { m_location = newLocation; }
void Doctor::SetYearsInPractice(int newYearsInPractice) { m_yearsInPractice = newYearsInPractice; }

void Doctor::ShowDoc() //function to output data into console
{
	cout << left << setw(20) << "Doctor Name: " << m_name << endl;
	cout << left << setw(20) << "Doctor Location: " << m_location << endl;
}