#pragma once
#include <iostream>
#include <string>

using namespace std;

struct Genre {
	int idGenre;
	string name;
};

Genre addGenre();
void displayGenre(Genre genre);
