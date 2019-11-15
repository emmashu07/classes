/*
 * Emma Shu, 11/15/2019: Header file for media, parent class to music, movies, and games.
 */

#pragma once
#include <iostream>

using namespace std;

class Media {
	public:
		Media(char* title, int year, int type);
        virtual ~Media();
		char* getTitle();
		int getYear();
		int getType();
        virtual void print();
	private:
		char* title;
		int year;
        int type;
};
