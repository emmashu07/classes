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
