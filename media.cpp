#include <iostream>
#include "media.h"

using namespace std;

Media::Media(char* title, int year, int type) {
	this->title = title;
	this->year = year;
    this->type = type;
}

Media::~Media() {
    delete []title;
}

void Media::print() {
    cout << "Title: " << title << endl;
    cout << "Year: " << year << endl;
}

char* Media::getTitle() {
	return title;
}

int Media::getYear() {
	return year;
}

int Media::getType() {
    return type;
}
