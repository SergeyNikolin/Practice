#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() 
{
	string text;                          //NUM_2
	ofstream OP("C:\test\text_file.txt");
	cout << "Enter the text" << endl;
	cin.getline(text, '/n');



	ifstream IP("C:\test\text_file.txt"); //NUM_1
	string word;
	while (!IP.eof())
	{
		IP >> word;
		cout << word << endl;
	}
}