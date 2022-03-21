#include "Genre.h"


Genre addGenre()
{
	Genre g;
	cin >> g.idGenre;
	cin >> g.name;

	return g;
}

void displayGenre(Genre g) {
	cout << "ID: " << g.idGenre << " | Name: " << g.name;
}

