#include<iostream>
#include "Book2.h"

using namespace std;



	Book::Book(int pg)
	{
		pageNum = pg;	
	}
	
	void Book::getData()
	{
		Publication::getData();
		cout << "Enter the page number for the book: ";
		cin >> pageNum;
		Sales:: getData();
	}
	
	void Book::putData()
	{
		Publication::putData();
		cout << "Page Number: " << pageNum << endl;
		Sales::putData();
	}
