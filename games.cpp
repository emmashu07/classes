#include <iostream>
#include "games.h"

using namespace std;

Games::Games(char* title, char* publisher, int year, int rating, int type) : Media(title, year, type){
    this->publisher = publisher;
    this->rating = rating;
}

void Games::print() {
    Media::print();
    cout << "Publisher: " << publisher << endl;
    cout << "Rating: " << rating << endl;
}

char* Games::getPublisher() {
    return publisher;
}

int Games::getRating() {
    return rating;
}
    
