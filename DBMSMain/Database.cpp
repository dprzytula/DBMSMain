#include "Database.h"

void Database::pushAuthor(Author author) 
{

	tableAuthor.push_back(author);
}

void Database::pushGenre(Genre genre) 
{

	tableGenre.push_back(genre);
}

void Database::pushPublisher(Publisher publisher) 
{

	tablePublisher.push_back(publisher);
}

void Database::pushBook(Book book) 
{
	if (authorExist(book.idAuthorFK) && genreExist(book.idGenreFK) && publisherExist(book.idPublisherFK)) 
	{
		tableBook.push_back(book);
	}
	else 
	{
		cout << "One of given foreign keys does not exist!";
	}
}

void Database::showAuthorList()
{
	for (std::list<Author>::iterator it = tableAuthor.begin(); it != tableAuthor.end(); ++it) {
		displayAuthor(*it);
		cout << endl;
	}
}

void Database::showGenreList()
{
	for (std::list<Genre>::iterator it = tableGenre.begin(); it != tableGenre.end(); ++it) {
		displayGenre(*it);
		cout << endl;
	}
}

void Database::showPublisherList()
{
	for (std::list<Publisher>::iterator it = tablePublisher.begin(); it != tablePublisher.end(); ++it) {
		displayPublisher(*it);
		cout << endl;
	}
}

void Database::showBookList()
{
	Book b;

	for (std::list<Book>::iterator it = tableBook.begin(); it != tableBook.end(); ++it) {
		b = *it;
		
		cout << "ID: " << b.idBook << " | " << "Title: " << b.title << endl;
		displayAuthor(getAuthor(b.idAuthorFK));
		cout << endl;
		displayGenre(getGenre(b.idGenreFK));
		cout << endl;
		displayPublisher(getPublisher(b.idPublisherFK));
		cout << endl;
	}
}

bool Database::authorExist(int id)
{
	for (std::list<Author>::iterator it = tableAuthor.begin(); it != tableAuthor.end(); ++it) {
		int idTemp = it->idAuthor;
		if (idTemp == id) {
			return true;
		}
	}

	return false;
}

bool Database::genreExist(int id)
{
	for (std::list<Genre>::iterator it = tableGenre.begin(); it != tableGenre.end(); ++it) {
		int idTemp = it->idGenre;
		if (idTemp == id) {
			return true;
		}
	}

	return false;
}

bool Database::publisherExist(int id)
{
	for (std::list<Publisher>::iterator it = tablePublisher.begin(); it != tablePublisher.end(); ++it) {
		int idTemp = it->idPublisher;
		if (idTemp == id) {
			return true;
		}
	}

	return false;
}

Author Database::getAuthor(int id)
{
	for (std::list<Author>::iterator it = tableAuthor.begin(); it != tableAuthor.end(); ++it) {
		int idTemp = it->idAuthor;
		if (idTemp == id) {
			return *it;
		}
	}
}

Genre Database::getGenre(int id)
{
	for (std::list<Genre>::iterator it = tableGenre.begin(); it != tableGenre.end(); ++it) {
		int idTemp = it->idGenre;
		if (idTemp == id) {
			return *it;
		}
	}
}

Publisher Database::getPublisher(int id)
{
	for (std::list<Publisher>::iterator it = tablePublisher.begin(); it != tablePublisher.end(); ++it) {
		int idTemp = it->idPublisher;
		if (idTemp == id) {
			return *it;
		}
	}
}