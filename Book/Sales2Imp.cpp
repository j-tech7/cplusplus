#include <iostream>
#include "Sales2.h"

using namespace std;

	void Sales::getData()
	{
		int i;
		//get previous sales from user
		for(i = 0; i < 3; i ++)
		{
			cout << "Enter the sales for the past 3 months : " << endl;
			cin >> salesArr[i];
		}
		cin.ignore(); // ignore new line from stream
	}
	
	void Sales:: putData()
	{
		int i;
		cout << "The sales for the past 3 months is: " << endl;
		for(i = 0; i < 3; i++)
		{
			cout << "Month " << i + 1 << ": $";
			cout << salesArr[i] << endl;
		}
	} 
