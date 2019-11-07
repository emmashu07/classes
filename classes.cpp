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
void addMedia(vector<Media*> *mediaList);
void deleteMedia(vector<Media*> *mediaList);

int main() {
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
	return 0;
}

void addMedia(vector<Media*> *mediaList) {
    cout << "Add." << endl;
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
}

Games* readInGame(char* title, int year) {
    char* publisher = new char[20];
    int rating;
    cout << "Please enter the name of the publisher for your game." << endl;
    cin >> publisher;
    cout << "Please enter the rating of your game out of 10." << endl;
    cin >> rating;
    Games *game = new Games(title, publisher, year, rating, 0);
    cout << game->getTitle() << endl;
    cout << game->getPublisher() << endl;
    cout << game->getYear() << endl;
    cout << game->getRating() << endl;
    cout << game->getType() << endl;
    return game;
}

void search(vector<Media*> *mediaList) {
    cout << "Search." << endl;
}

void deleteMedia(vector<Media*> *mediaList) {
    cout << "Delete." << endl;
}
