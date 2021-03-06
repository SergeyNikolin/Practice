#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>

using namespace std;

class Tiles
{
public:
	double sizew, sizeh;
	string brand;

	Tiles(double sw, double sh, string br)
	{
		sizew = sw; sizeh = sh; brand = br;
	}

	Tiles()
	{
		sizew = 0; sizeh = 0; brand = "No name";
	}

	Tiles (const Tiles& obj)
	{
		obj.sizew = sizew; obj.sizeh = sizeh; obj.brand = brand;
		return obj;
	}

	~Tiles()
	{
		cout << "Объект класса Tiles уничтожен деструктором" << endl;
	}

	void getData()
	{
		cout << brand << " " << sizew << "x" << sizeh;
	}
};

int main() 
{
	string brand1 = "Brand 1", brand2 = "Brand 2";
	double sw1 = 100, sh1 = 100, sw2 = 150, sh2 = 150;
	Tiles t1(sw1, sh1, brand1);
	Tiles t2(sw2, sh2, brand2);
	t1.getData(); cout << endl;
	t2.getData(); cout << endl;
	cin.get();
}