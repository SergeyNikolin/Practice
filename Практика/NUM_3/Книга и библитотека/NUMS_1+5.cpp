#include "pch.h"
#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <Windows.h>

using namespace std;

class Book
{
public:
	int year, NumOfPages;
	char author[50], publisher[50], name[50];

	Book() {}
	Book(int yr, int NOP, char auth[50], char pub[50], char nm[50])
	{
		year = yr; NumOfPages = NOP;
		for (int i = 0; i < 50; i++)
		{
			author[i] = auth[i];
			publisher[i] = pub[i];
			name[i] = nm[i];
		}
	}
	~Book() {}
};

class Library
{
public:
	std::vector<Book> library;

	void AddBook(Book NewBook)
	{
		library.push_back(NewBook);
	}

	void ShowBooks()
	{
		for (int i = 0; i < library.size(); i++)
		{
			Book ToShow = library[i];
			std::cout << ToShow.author << " " << ToShow.name << " " << ToShow.publisher << " " << ToShow.year << " " << ToShow.NumOfPages;
			std::cout << std::endl;
		}
	}
};

int main()
{
	setlocale(LC_CTYPE, "rus");
	Library libra;
	for (;;)
	{
		system("cls");
		cout << "1. Добавить новую книгу;" << endl << "2. Посмотреть текущее состояние библиотеки;" << endl << "0. Выйти" << endl << "Номер команды: ";
		int ans;
		cin >> ans;
		switch (ans)
		{
		case 1:
		{
			system("cls");
			cout << "Заполните форму" << endl << "1.Автор \\ 2.Название книги \\ 3.Кол-во страниц \\ 4.Издатель \\ 5.Год издания" << endl;
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
		default: {cout << "Вы ввели неверную команду, попробуйте снова"; Sleep(1500); break; }
		}
	}
}