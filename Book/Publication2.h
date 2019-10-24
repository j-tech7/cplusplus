#ifndef H_Publication
#define H_Publication


using namespace std;
//publication class
class Publication
{
	public :
		Publication(string title = "", float p = 0);
		void getData();
		void putData();
		
	protected :
		string title;
		float price;
};


#endif
