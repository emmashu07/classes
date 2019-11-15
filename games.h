/*
 * Emma Shu, 11/15/2019: Header file for games, child class to Media.
 */

#pragma once
#include <iostream>
#include "media.h"

using namespace std;

class Games: public Media {
	public:
		Games(char* title, char* publisher, int year, int rating, int type);
        virtual ~Games();
		char* getPublisher();
		int getRating();
        virtual void print();
	private:
		char* publisher;
		int rating;
};
		
