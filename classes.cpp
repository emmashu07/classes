#include <iostream>
#include <cstring>
#include <vector>
#include "media.h"
#include "games.h"
#include "music.h"
#include "movies.h"

using namespace std;

void search(vector<Media*> *mediaList);
Game* readInGame(char* title, int year);
void addMedia(vector<Media*> *mediaList);
void deleteMedia(vector<Media*> *mediaList);

int main() {
	vector<Media*> *mediaList = new vector<Media*>();
	char input[20];
	bool running = true;
	cout << "Type HELP to view the available functions." << endl;
	while (running) {
		cin >> input;
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
    int year;
    char* title;
    int mediaType;
    cout << "Please enter the title of your piece of media." << endl;
    cin >> title;
    cout << "Please enter the year your piece of media was made." << endl;
    cin >> year;
    while(mediaType != 1 || mediaType != 2 || mediaType != 3) {
        cout << "Please enter the number corresponding to the media type you would like to enter:" << endl;
        cout << "1. Video Game" << endl;
        cout << "2. Music" << endl;
        cout << "3. Movies" << endl;
        cin >> mediaType;
    }
    if (mediaType == 1) {
        mediaList -> push_back(readInGame(title, year));
    }
}

Game* readInGame(char* title, int year) {
    char* publisher;
    int rating;
    cout << "Please enter the name of the publisher for your game." << endl;
    cin >> publisher;
    cout << "Please enter the rating of your game." << endl;
    cin >> rating;
}

void search(vector<Media*> *mediaList) {

}

void deleteMedia(vector<Media*> *mediaList) {

}
