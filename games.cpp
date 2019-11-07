#include <iostream>
#include "games.h"

using namespace std;

Games::Games(char* title, char* publisher, int year, int rating, int type) : Media(title, year, type){
    this->publisher = publisher;
    this->rating = rating;
}

char* Games::getPublisher() {
    return publisher;
}

int Games::getRating() {
    return rating;
}
    
