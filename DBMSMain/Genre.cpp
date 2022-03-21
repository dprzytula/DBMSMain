#include "Genre.h"


Genre addGenre()
{
	Genre g;
	cout << "Podaj id gatunku:" << endl;
	cin >> g.idGenre;
	cout << "Podaj nazwê gatunku:" << endl;
	cin >> g.name;

	return g;
}

void displayGenre(Genre g) {
	cout << "ID: " << g.idGenre << " | Name: " << g.name;
}

