
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
		cout << "1. Добавить новую книгу;" << endl << "2. Посмотреть текущее состояние библиотеки;" << endl << "3. Отсортировать список книг;" << endl << "4. Выйти" << endl << "Номер команды: ";
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
			cout << "Выберите способ сортировки: " << endl << "1. Сортировка по автору (по алфавиту);" << endl << "2. Сортировка по названию (по алфавиту);" << endl << "3. Сортировка по названию издателя (по алфавиту);" << endl << "4. Сортировка по дате выпуска (по уменьшению возраста);" << endl << "5. Сортировка по количеству страниц (по возрастанию);" << endl << "Номер команды: ";
			int ansSort;
			cin >> ansSort;
			switch (ansSort)
			{
			case 1: { libra.SortByAuthor(); break; }
			case 2: { libra.SortByName(); break; }
			case 3: { libra.SortByPub(); break; }
			case 4: { libra.SortByYear(); break; }
			case 5: { libra.SortByNOP(); break; }
			default: { cout << "Вы ввели неправильный номер, попробуйте снова"; Sleep(1500);  goto case3; }
			}
			break;
		}
		case 4:
		{
			return 0;
		}
		default: {cout << "Вы ввели неверную команду, попробуйте снова"; Sleep(1500); break; }
		}
	}
}