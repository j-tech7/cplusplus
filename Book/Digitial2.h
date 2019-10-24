#ifndef H_Digitial
#define H_Digitial

#include "Publication2.h"
#include "Sales2.h"

//inherit from publication class and sales class
//digitial class
class Digitial: public Publication, public Sales
{
	public :
		void getData();
		void putData();
		
	private :
		double cap;
	
};
#endif
