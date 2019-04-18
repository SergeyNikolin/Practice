#pragma once
#include<iostream>
#include <string>
#include <vector>
#include <iterator>

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
			std::cout << ToShow.author << ToShow.name << ToShow.publisher << ToShow.year << ToShow.NumOfPages << '/n';
		}
	}

	void SortByYear()
	{
		std::vector<Book>::iterator it;
		std::vector<Book>::iterator it2;
		for (it = library.begin(); it< library.end()-2; it++)
		{
			for (it2 = library.begin(); it2 < library.end() - 1; it2++)
			{
				Book book1, book2;
				book1 = *it; book2 = *it2;
				if (book1.year > book2.year)
				{
					Book swap;
					swap = book1; book1 = book2; book2 = swap;
				}
			}
		}
	}

	void SortByAuthor()
	{
		std::vector<Book>::iterator it;
		std::vector<Book>::iterator it2;
		for (it = library.begin(); it < library.end() - 2; it++)
		{
			for (it2 = library.begin(); it2 < library.end() - 1; it2++)
			{
				Book book1, book2;
				book1 = *it; book2 = *it2;
				if (book1.author > book2.author)
				{
					Book swap;
					swap = book1; book1 = book2; book2 = swap;
				}
			}
		}
	}

	void SortByName()
	{
		std::vector<Book>::iterator it;
		std::vector<Book>::iterator it2;
		for (it = library.begin(); it < library.end() - 2; it++)
		{
			for (it2 = library.begin(); it2 < library.end() - 1; it2++)
			{
				Book book1, book2;
				book1 = *it; book2 = *it2;
				if (book1.name > book2.name)
				{
					Book swap;
					swap = book1; book1 = book2; book2 = swap;
				}
			}
		}
	}

	void SortByPub()
	{
		std::vector<Book>::iterator it;
		std::vector<Book>::iterator it2;
		for (it = library.begin(); it < library.end() - 2; it++)
		{
			for (it2 = library.begin(); it2 < library.end() - 1; it2++)
			{
				Book book1, book2;
				book1 = *it; book2 = *it2;
				if (book1.publisher > book2.publisher)
				{
					Book swap;
					swap = book1; book1 = book2; book2 = swap;
				}
			}
		}
	}
	void SortByNOP()
	{
		std::vector<Book>::iterator it;
		std::vector<Book>::iterator it2;
		for (it = library.begin(); it < library.end() - 2; it++)
		{
			for (it2 = library.begin(); it2 < library.end() - 1; it2++)
			{
				Book book1, book2;
				book1 = *it; book2 = *it2;
				if (book1.NumOfPages > book2.NumOfPages)
				{
					Book swap;
					swap = book1; book1 = book2; book2 = swap;
				}
			}
		}
	}
};