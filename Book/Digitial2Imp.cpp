#include<iostream>
#include "Digitial2.h"

 using namespace std;
  
 	void Digitial::getData()
 	{
 		Publication::getData();
 		cout << "Enter Storage Capactity: ";
 		cin >> cap;
 		Sales::getData();
	}
	
	void Digitial::putData()
	{
		Publication::putData();
		cout << "Storage capacity: " << cap << "MB(s)" << endl;
		Sales::putData();
	}
 
