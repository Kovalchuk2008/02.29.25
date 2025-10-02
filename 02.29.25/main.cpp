#include<iostream>
using namespace std;

class Elevator
{
	int topFloor;
	int groundFloor;
	bool OnOff;
	bool works;
	int position;
public:
	Elevator(int ground, int top);
	void onOff();
	void setPosition(int); 
	int GetPosition();
	void Call();
};
Elevator::Elevator(int ground, int top)
{
	groundFloor = ground;
	topFloor = top;
	OnOff = false; 
	works = false;
	position = 0;
}
void Elevator::onOff()
{
	OnOff = !OnOff;
}
void Elevator::setPosition(int position)
{
	this->position = position;
}
int Elevator::GetPosition()
{
	return position;
}
void Elevator::Call()
{
	cout << "Enter your floor from: " << groundFloor << " to: " << topFloor << endl;
	cin >> position;
	int Floor;
	cout << "Enter your current position:  = " << position << endl;
	if (!OnOff)
	{
		cout << "Elevator on";
		return;
	}
	if (Floor < groundFloor && Floor > topFloor)
	{
		cout << "There is no floor";
	}
	else
	{
		position = Floor;
		cout << "Elevator going on floor" << position << endl;
	}
}

int main()
{
	setlocale(0, "ru");
	Elevator el(1, 10);
	el.onOff();
	el.Call();
}

