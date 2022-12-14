#pragma once
#include <iostream>
using namespace std;

class Reservoir{
	int num;
	int x;
	int y;
	int z;


	string* type = new string[num];
	string* name = new string[num];
	void print();
	void printAll();
public:
	Reservoir() 
		:x{ 0 }, y{ 0 }, z{ 0 }, type{ NULL } 
	{}
	Reservoir(int xx, int yy, int zz) 
		:x{xx}, y{yy}, z{zz}
	{
		cout << "write num " << endl; cin >> num;
		if (num != 0) {
			for (int i{ 0 }; i < num; i++) {
				
				print();
			}
		}
		else cout << "bye";
	}

	

	~Reservoir(){}
};

