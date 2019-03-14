/*
Created By: Arslan Khurram
Assignment 3: Ponters
IDE: Visual Studio 
*/
#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;
//*********************************************************************
// Class: CuteRobot
// Purpose: Holds positoin of robot and allows it to move
//*********************************************************************
class CuteRobot {
	int m_position;
public:
	CuteRobot(int position) {
		m_position = position;
	}
	int getPosition() {
		return m_position;
	}
//*********************************************************************
// Function: move
// Purpose: Move poition of robot
//*********************************************************************
	void  move(int steps) {
		m_position += steps;
	}
//*********************************************************************
// Function: meet
// Purpose: move all robots to center robot
//*********************************************************************
	void meet(CuteRobot* cr) {
		//loop is used to avoid negatives 
		if (cr->getPosition() >= m_position) {
			int difference = cr->getPosition() - m_position;
			cout << "difference: " << difference << endl;
			m_position += difference;
		}
		else {
			int difference = m_position - cr->getPosition();
			cout << "difference: " << difference << endl;
			m_position -= difference;
		}
	}
};

int main()
{
	CuteRobot robot[5] = { CuteRobot(-5), CuteRobot(10),CuteRobot(-15),CuteRobot(20),CuteRobot(-25) };
	CuteRobot centerRobot(100);
	cout << "Initial Position" << endl;
	cout << "----------------------------------------------" << endl;
		
		//show initial position 
		for (int i = 0; i < 5; i++)
			{
				cout << "Position"<< i+1 << ": " << robot[i].getPosition() << endl;
			}

	cout << "\nMoved Position" << endl;
	cout << "----------------------------------------------" << endl;
		//show moved position
		for (int i = 0; i < 5; i++)
			{
				srand((unsigned)time(0)); //random number generator for moving robot
				robot[i].move(i * (rand()%50));
				cout << "Moved Position" << i+1 << ": " << robot[i].getPosition() << endl;
			}

	cout << "\nMeet at Center Robot Position: " << centerRobot.getPosition()<< endl;
	cout << "----------------------------------------------" << endl;
		//show meet position
		for (int i = 0; i < 5; i++)
			{
				robot[i].meet(&centerRobot);
				cout << "End Position "<<i+1<< ": " << robot[i].getPosition() << endl;
			}

	return 0;
}