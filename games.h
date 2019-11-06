#include <iostream>
#include "media.h"

using namespace std;

class Games: public Media {
	public:
		Games(char*, char*);
		char* getPublisher();
		int getRating();
		int getType();
	private:
		char* publisher;
		int rating;
		int type = 0;
};
		
