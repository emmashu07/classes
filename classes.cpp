/*
 * Emma Shu: A program that stores the information of digital media
 * and can add, search, and delete for the media.
 */

#include <iostream>
#include <cstring>
#include <vector>
#include "media.h"
#include "games.h"
#include "music.h"
#include "movies.h"

using namespace std;

void search(vector<Media*> *mediaList);
Games* readInGame(char* title, int year);
Music* readInMusic(char* title, int year);
Movies* readInMovie(char* title, int year);
void printGame(Media *media);
void printMusic(Media *media);
void printMovie(Media *media);
void addMedia(vector<Media*> *mediaList);
void deleteMedia(vector<Media*> *mediaList);
void releaseMemory(vector<Media*> *mediaList);

int main() { // Asks for commands and executes corresponding function.
	vector<Media*> *mediaList = new vector<Media*>();
	char input[20];
	bool running = true;
	cout << "Type HELP to view the available functions." << endl;
	while (running) {
		cin >> input;
        cin.ignore(100, '\n');
		if (strcmp(input, "HELP") == 0) {
			cout << "Type SEARCH to find and print media by title or year." << endl;
			cout << "Type ADD to add media." << endl;
			cout << "Type DELETE to delete media." << endl;
		}
		else if (strcmp(input, "SEARCH") == 0) {
			search(mediaList);	
		}
		else if (strcmp(input, "ADD") == 0) {
			addMedia(mediaList);
		}
		else if (strcmp(input, "DELETE") == 0) {
			deleteMedia(mediaList);
		}
		else if (strcmp(input, "QUIT") == 0) {
			running = false;
		}
		else {
			cout << "Please enter a valid command. Type HELP for help." << endl;
		}
	}
	releaseMemory(mediaList);
	return 0;
}

void addMedia(vector<Media*> *mediaList) { // Adds the media based off of the numer given specifying the type.
    int year;
    char* title = new char[20];
    int mediaType;
    cout << "Please enter the title of your piece of media." << endl;
    cin.get(title, 20, '\n');
    cin.ignore(100, '\n');
    cout << "Please enter the year your piece of media was made." << endl;
    cin >> year;
    cin.ignore(100, '\n');
    cout << "Please enter the number corresponding to the media type you would like to enter:" << endl;
    cout << "1. Video Game" << endl;
    cout << "2. Music" << endl;
    cout << "3. Movies" << endl;
    cin >> mediaType;
    cin.ignore(100, '\n');
    if (mediaType == 1) {
        mediaList -> push_back(readInGame(title, year));
    }
    else if (mediaType == 2) {
       mediaList -> push_back(readInMusic(title, year));
    }
    else if (mediaType == 3) {
       mediaList -> push_back(readInMovie(title, year));
    }
    cout << "Added." << endl; 
}

Games* readInGame(char* title, int year) { // Read in a game type media.
    char* publisher = new char[20];
    int rating;
    cout << "Please enter the name of the publisher for your game." << endl;
    cin >> publisher;
    cin.ignore(100, '\n');
    cout << "Please enter the rating of your game out of 10." << endl;
    cin >> rating;
    cin.ignore(100, '\n');
    Games *game = new Games(title, publisher, year, rating, 0); 
    return game;
}

Music* readInMusic(char* title, int year) { // Read in a music type media.
    char* artist = new char[20];
    char* publisher = new char[20];
    int duration;
    cout << "Please enter the name of the artist for your music." << endl;
    cin >> artist;
    cin.ignore(100, '\n');
    cout << "Please enter the name of the publisher for your music." << endl;
    cin >> publisher;
    cin.ignore(100, '\n');
    cout << "Please enter the duration of your music in seconds." << endl;
    cin >> duration;
    cin.ignore(100, '\n');
    Music *music = new Music(title, artist, publisher, year, duration, 1);
    return music;
}

Movies* readInMovie(char* title, int year) { // Read in a movie type media.
    char* director = new char[20];
    int duration;
    int rating;
    cout << "Please enter the name of the director for your movie." << endl;
    cin >> director;
    cin.ignore(100, '\n');
    cout << "Please enter the duration of your movie in minutes." << endl;
    cin >> duration;
    cin.ignore(100, '\n');
    cout << "Please enter the rating of your movie out of 10." << endl;
    cin >> rating;
    cin.ignore(100, '\n');
    Movies *movie = new Movies(title, director, year, duration, rating, 2);
    return movie;
}

void search(vector<Media*> *mediaList) { // Search based off of the title or year.
    int input;
    vector<Media*>::iterator it; 
    cout << "Please enter a 1 if you want to search by title." << endl;
    cout << "Please enter a 2 if you want to search by year." << endl;
    cin >> input;
    cin.ignore(100, '\n');
    if (input == 1) {
        char* title = new char[20];
        cout << "Please enter the title you want to search for." << endl;
        cin.get(title, 20, '\n');
        cin.ignore(100, '\n');
        for(it = mediaList -> begin(); it < mediaList -> end(); it++) {
            if(strcmp((*it)->getTitle(),title) == 0) {
                (*it)->print();
            }  
        }
    }
    else if (input == 2) {
        int year;
        cout << "Please enter the year you want to search for." << endl;
        cin >> year;
        cin.ignore(100, '\n');
        for(it = mediaList -> begin(); it < mediaList -> end(); it++) {
            if(year == (*it)->getYear()) {
                (*it)->print();
            }  
        }   
    } 
}

void deleteMedia(vector<Media*> *mediaList) { // Delete based off of the title or year.
    int input;
    char* yesno = new char[2];
    vector<Media*>::iterator it; 
    cout << "Please enter a 1 if you want to search by title." << endl;
    cout << "Please enter a 2 if you want to search by year." << endl;
    cin >> input;
    cin.ignore(100, '\n');
    if (input == 1) {
        char* title = new char[20];
        cout << "Please enter the title of the media(s) you want to delete." << endl;
        cin.get(title, 20, '\n');
        cin.ignore(100, '\n');
        for(it = mediaList -> begin(); it < mediaList -> end(); it++) {
            if(strcmp((*it)->getTitle(),title) == 0) {
                (*it)->print();
                cout << "Are you sure you want to delete these? Y/N" << endl;
                cin >> yesno;
                cin.ignore(100, '\n');
                if (strcmp(yesno, "Y") == 0) {
                    delete (*it);
                    mediaList -> erase(it);
                    break;
                }
            }  
        }
	delete []title;
    }
    else if (input == 2) {
        int year;
        cout << "Please enter the year of the media(s) you want to delete." << endl;
        cin >> year;
        cin.ignore(100, '\n');
        for(it = mediaList -> begin(); it < mediaList -> end(); it++) {
            if(year == (*it)->getYear()) {
                (*it)->print();
                cout << "Are you sure you want to delete these? Y/N" << endl;
                cin >> yesno;
                cin.ignore(100, '\n');
                if (strcmp(yesno, "Y") == 0) {
                    delete (*it);
                    mediaList -> erase(it);
                    break;
                }
            }  
        }   
    }    
    delete []yesno;
    cout << "Deleted." << endl;
}
void releaseMemory(vector<Media*> *mediaList) {
    vector<Media*>::iterator it; 
    for(it = mediaList -> begin(); it < mediaList -> end(); it++) {
        delete (*it);
    }
    delete mediaList;
}
