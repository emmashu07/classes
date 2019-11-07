#include <iostream>
#include "movies.h"

using namespace std;

Music::Music(char* title, char* director, int year, int duration, int rating, int type): Media(title, year, type) {
    this->director = director;
    this->duration = duration;
    this->rating = rating;
}

char* Music::getDirector() {
    return director;
}

int Music::getDuration() {
    return duration;
}

int Music::getRating() {
    return rating;
}
