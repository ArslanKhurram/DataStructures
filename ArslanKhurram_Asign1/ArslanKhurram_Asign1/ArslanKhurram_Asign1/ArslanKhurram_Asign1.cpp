#include "pch.h"
#include <iostream>
#include "Surgeon.h"

using namespace std;

int main()
{
	Surgeon s[3]	//intialize Surgeon object array and fill data
	{

		Surgeon("Orthopedics", "Allen,Egan F.,MD", "Rochester,NY", 23),
		Surgeon("OB/GYN", "Floresue,Heater,MD", "Denver,CO", 15),
		Surgeon("Urologist", "Rashid,Hani,MD", "Boston,MA", 21)

	};
	
	for (int i = 0; i < 3; i++)  //loop to output data into console window
	{
		cout << "Doctor#" << i + 1 << ":\n\n";
		s[i].ShowDoc();
		s[i].ShowSurg();
		cout << "---------------------------------------------------" << endl;
	}

	return 0;
}