#include <iostream>
#include "music.h"

using namespace std;

Music::Music(char* title, char* artist, char* publisher, int year, int duration, int type) : Media(title, year, type) {
    this->artist = artist;
    this->publisher = publisher;
    this->duration = duration;
}

Music::~Music() {
    delete []artist;
    delete []publisher;
}

void Music::print() {
    Media::print();
    cout << "Artist: " << artist << endl;
    cout << "Publisher: " << publisher << endl;
    cout << "Duration: " << duration << endl;
}

char* Music::getArtist() {
    return artist;
}

char* Music::getPublisher() {
    return publisher;
}

int Music::getDuration() {
    return duration;
}
