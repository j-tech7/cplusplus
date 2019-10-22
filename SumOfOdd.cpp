//Jesse Guardado
//CECS 282 LAB1 P1
#include <iostream>

using namespace std;


int main()
{
	int num;
	int odd = 0;
	//prompt for a number to be entered
	cout << "Enter a number : ";
	cin >> num;
	
	while (num > 0)
	{
		//look through ALL digits
		int temp = num % 10;
		num /= 10;
		//if odd digits print and return odd digits
		if(temp % 2 != 0)
			odd += temp;	
	}
	
	cout << "The sum of the odd digits is " << odd;




	return 0;
}
