#include "Book.h"

Book addBook()
{
	Book b;
	cout << "Podaj id ksi��ki:" << endl;
	cin >> b.idBook;
	cout << "Podaj id autora ksi��ki:" << endl;
	cin >> b.idAuthorFK;
	cout << "Podaj id gatunku ksi��ki:" << endl;
	cin >> b.idGenreFK;
	cout << "Podaj id wydawnictwa ksi��ki:" << endl;
	cin >> b.idPublisherFK;
	cout << "Podaj tytu� ksi��ki:" << endl;
	cin >> b.title;

	return b;
}
