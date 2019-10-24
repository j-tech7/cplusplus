#include <iostream>
#include "Publication2.h"

using namespace std;

	Publication:: Publication(string t, float p)
	{
		title = t;
		price = p;
	}
	
	void Publication:: getData()
	{
		cout << "Enter Title: ";
		getline(cin, title);
		cout << "Enter the price: $";
		cin >> price;
	}
	
	void Publication:: putData()
	{
		cout << "TItle: " << title << endl;
		cout << "Price: $ " << price << endl;
		
	}
