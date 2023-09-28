// Friend-Function-Activity.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class car;
class truck {
	int s;
public:
	void get(){
		cout << "\nEnter truck speed: ";
		cin >> s;
	}
	friend void speed(truck s1, car s2);
};
class car {
	int s;
public:
	void get(){
		cout << "\nEnter car speed: ";
		cin >> s;
	}
	friend void speed(truck s1, car s2);
};

void speed(truck s1, car s2) {
	if (s1.s > s2.s)
		cout << "\nTruck is faster";
	else if (s2.s > s1.s)
		cout << "\nCar is faster";
	else
		cout << "\nBoth are going the same speed";
}
int main()
{
	truck s1;
	car s2;
	s1.get();
	s2.get();
	speed(s1, s2);
	return 0;
}

