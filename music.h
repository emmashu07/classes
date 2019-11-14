#pragma once
#include <iostream>
#include "media.h"

using namespace std;

class Music : public Media {
    public:
        Music(char* title, char* artist, char* publisher, int year, int duration, int type);
        virtual ~Music();
        char* getArtist();
        char* getPublisher();
        int getDuration();
        virtual void print();
    private:
        char* artist;
        char* publisher;
        int duration;
};
