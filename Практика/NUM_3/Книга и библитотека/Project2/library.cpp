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
			std::cout << ToShow.author << " " << ToShow.name << " " << ToShow.publisher << " " << ToShow.year << " " << ToShow.NumOfPages;
			std::cout << std::endl;
		}
	}
};