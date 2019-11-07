#include <iostream>
#include "media.h"

using namespace std;

class Music : public Media {
    public:
        Music(char* title, char* director, int year, int duration, int rating, int type);
        char* getDirector();
        int getDuration();
        int getRating();
    private:
        char* director;
        int duration;
        int rating;
};
