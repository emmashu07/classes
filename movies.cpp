#include <iostream>
#include "movies.h"

using namespace std;

Movies::Movies(char* title, char* director, int year, int duration, int rating, int type): Media(title, year, type) {
    this->director = director;
    this->duration = duration;
    this->rating = rating;
}

char* Movies::getDirector() {
    return director;
}

int Movies::getDuration() {
    return duration;
}

int Movies::getRating() {
    return rating;
}
