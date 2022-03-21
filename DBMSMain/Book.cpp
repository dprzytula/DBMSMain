#include "Book.h"

Book addBook()
{
	Book b;
	cin >> b.idBook;
	cin >> b.idAuthorFK;
	cin >> b.idGenreFK;
	cin >> b.idPublisherFK;
	cin >> b.title;

	return b;
}
