#include "Book.h"

Book addBook()
{
	Book b;
	cout << "Podaj id ksi¹¿ki:" << endl;
	cin >> b.idBook;
	cout << "Podaj id autora ksi¹¿ki:" << endl;
	cin >> b.idAuthorFK;
	cout << "Podaj id gatunku ksi¹¿ki:" << endl;
	cin >> b.idGenreFK;
	cout << "Podaj id wydawnictwa ksi¹¿ki:" << endl;
	cin >> b.idPublisherFK;
	cout << "Podaj tytu³ ksi¹¿ki:" << endl;
	cin >> b.title;

	return b;
}
