/*
 * Emma Shu, 11/15/2019: Header file for movies, child class to Media.
 */

#pragma once
#include <iostream>
#include "media.h"

using namespace std;

class Movies : public Media {
    public:
        Movies(char* title, char* director, int year, int duration, int rating, int type);
        virtual ~Movies();
        char* getDirector();
        int getDuration();
        int getRating();
        virtual void print();
    private:
        char* director;
        int duration;
        int rating;
};
