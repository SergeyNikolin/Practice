
#include<iostream>
#include"Library.h"
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	Library libra;
	for (;;)
	{
		system("cls");
		cout << "1. �������� ����� �����;" << endl << "2. ���������� ������� ��������� ����������;" << endl << "3. ������������� ������ ����;" << endl << "4. �����" << endl << "����� �������: ";
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
			getline(cin, name);
			cout << "2. ";
			getline(cin, name);
			cout << "3. ";
			cin >> year;
			cout << "4. ";
			getline(cin, name);
			cout << "5. ";
			cin >> NOP;
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
		case 3:
		{
			case3:
			system("cls");
			cout << "�������� ������ ����������: " << endl << "1. ���������� �� ������ (�� ��������);" << endl << "2. ���������� �� �������� (�� ��������);" << endl << "3. ���������� �� �������� �������� (�� ��������);" << endl << "4. ���������� �� ���� ������� (�� ���������� ��������);" << endl << "5. ���������� �� ���������� ������� (�� �����������);" << endl << "����� �������: ";
			int ansSort;
			cin >> ansSort;
			switch (ansSort)
			{
			case 1: { libra.SortByAuthor(); break; }
			case 2: { libra.SortByName(); break; }
			case 3: { libra.SortByPub(); break; }
			case 4: { libra.SortByYear(); break; }
			case 5: { libra.SortByNOP(); break; }
			default: { cout << "�� ����� ������������ �����, ���������� �����"; Sleep(1500);  goto case3; }
			}
			break;
		}
		case 4:
		{
			return 0;
		}
		default: {cout << "�� ����� �������� �������, ���������� �����"; Sleep(1500); break; }
		}
	}
}