#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

void search(vector<Media*> *mediaList);
void addMedia(vector<Media*> *mediaList);
void deleteMedia(vector<Media*> *mediaList);

int main() {
	vector<Media*> *mediaList = new vector<Media*>();
	char input[20];
	bool running = true;
	while (running) {
		cin >> input;
		if (strcmp(input, "HELP") == 0) {
			cout << "Type SEARCH to find and print media by title or year." << endl;
			cout << "Type ADD to add media." << endl;
			cout << "Type DELETE to delete media." << endl;
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

}

void search(vector<Media*> *mediaList) {

}

void deleteMedia(vector<Media*> *mediaList) {

}
