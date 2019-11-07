#include <iostream>

using namespace std;

class Media {
	public:
		Media(char* title, int year, int type);
		char* getTitle();
		int getYear();
		int getType();
	private:
		char* title;
		int year;
        int type;
};
