#include "Author.h"


Author addAuthor()
{
	Author a;
	cin >> a.idAuthor;
	cin >> a.firstName;
	cin >> a.lastName;

	return a;
}

void displayAuthor(Author a) {
	cout << "ID: " << a.idAuthor << " | First Name: " << a.firstName << " | Last Name: " << a.lastName;
}

