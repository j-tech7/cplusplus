#ifndef H_Book
#define H_Book

#include "Publication2.h"
#include "Sales2.h"

//inherit from publicatin and sales class
//book class
class Book: public Publication, public Sales
{
	public :
		Book(int pg = 0);
		void getData();
		void putData();
		
	protected :
		int pageNum;
		
};

#endif
