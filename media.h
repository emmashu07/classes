#include <iostream>

using namespace std;

class Media {
	public:
		Media(char*, char*);
		char* getTitle();
		int getYear();
		int getType();
	private:
		char* title;
		int year;
};
