#pragma once
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Doctor
{ 
private:
	string m_name;
	string m_location;

protected:
	int m_yearsInPractice;

public:
	Doctor(); // default constructor
	Doctor(string name, string location, int yearsInPractice); // constructor with parameters
	~Doctor(); // deconstructor

	string GetDocName(); 
	string GetDocLocation();
	int GetYearsInPractice();

	void SetDocName(string newName);
	void SetDocLocation(string newLoaction);
	void SetYearsInPractice(int newYearsInPractice);

	void ShowDoc(); //function to output data into console
};

