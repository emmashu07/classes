#include <iostream>
#include "media.h"

using namespace std;

Media::Media(char* title, int year, int type) {
	this->title = title;
	this->year = year;
    this->type = type;
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
