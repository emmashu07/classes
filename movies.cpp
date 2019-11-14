#include <iostream>
#include "movies.h"

using namespace std;

Movies::Movies(char* title, char* director, int year, int duration, int rating, int type): Media(title, year, type) {
    this->director = director;
    this->duration = duration;
    this->rating = rating;
}

Movies::~Movies() {
    delete []director;
}

void Movies::print() {
    Media::print();
    cout << "Director: " << director << endl;
    cout << "Duration: " << duration << endl;
    cout << "Rating: " << rating << endl;
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
