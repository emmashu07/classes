#pragma once
#include <iostream>
#include "media.h"

using namespace std;

class Games: public Media {
	public:
		Games(char* title, char* publisher, int year, int rating, int type);
		char* getPublisher();
		int getRating();
	private:
		char* publisher;
		int rating;
};
		
