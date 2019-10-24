//Jesse Guardado
//CECS 282 LAB 6.2
#include <iostream>
#include"Book2.h"
#include"Digitial2.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//main method
int main(int argc, char** argv)
{

	//testing out objects for Book class
	cout << "Testing the Books Object" << endl;
	cout << endl << endl;
	Book book;
	book.getData();
	cout << endl << endl;
	book.putData();
	cout << endl << endl;
	
	//testing out objects for Digital class
	cout << "Testing the Digital Object" << endl;
	Digitial digitial;
	digitial.getData();
	cout << endl << endl;
	digitial.putData();
	cout << endl << endl;
	
	return 0;
}
