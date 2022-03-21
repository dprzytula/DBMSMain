#include "Author.h"


Author addAuthor()
{
	Author a;
	cout << "Podaj id autora:" << endl;
	cin >> a.idAuthor;
	cout << "Podaj imie autora:" << endl;
	cin >> a.firstName;
	cout << "Podaj nazwisko autora:" << endl;
	cin >> a.lastName;

	return a;
}

void displayAuthor(Author a) {
	cout << "ID: " << a.idAuthor << " | First Name: " << a.firstName << " | Last Name: " << a.lastName;
}

