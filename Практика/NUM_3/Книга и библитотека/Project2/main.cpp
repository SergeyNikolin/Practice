#include"Library.h"
#include <Windows.h>
#include <cstdlib>
#include <iostream>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	Library libra;
	for (;;)
	{
		system("cls");
		cout << "1. �������� ����� �����;" << endl << "2. ���������� ������� ��������� ����������;" << endl << "0. �����" << endl << "����� �������: ";
		int ans;
		cin >> ans;
		switch (ans)
		{
		case 1:
		{
			system("cls");
			cout << "��������� �����" << endl << "1.����� \\ 2.�������� ����� \\ 3.���-�� ������� \\ 4.�������� \\ 5.��� �������" << endl;
			char author[50], pub[50], name[50]; int year, NOP;
			cout << "1. ";
			cin.getline(author, '/n');
			cin.getline(author, '/n');
			cout << "2. ";
			cin.getline(name, '/n');
			cout << "3. ";
			cin >> NOP;
			cout << "4. ";
			cin.getline(pub, '/n');
			cin.getline(pub, '/n');
			cout << "5. ";
			cin >> year;
			Book NewBook(year, NOP, author, pub, name);
			libra.AddBook(NewBook);
			break;
		}
		case 2:
		{
			system("cls");
			libra.ShowBooks();
			cout << endl;
			system("pause");
			break;
		}
		case 0:
		{
			return 0;
		}
		default: {cout << "�� ����� �������� �������, ���������� �����"; Sleep(1500); break; }
		}
	}
}