#pragma once
#include <iostream>
#include "media.h"

using namespace std;

class Movies : public Media {
    public:
        Movies(char* title, char* director, int year, int duration, int rating, int type);
        char* getDirector();
        int getDuration();
        int getRating();
    private:
        char* director;
        int duration;
        int rating;
};
