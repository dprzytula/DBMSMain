#pragma once
#include <iostream>
#include <list>
#include "Author.h"
#include "Genre.h"
#include "Publisher.h"
#include "Book.h"

using namespace std;

class Database {
private:
	list <Author> tableAuthor;
	list <Genre> tableGenre;
	list <Publisher> tablePublisher;
	list <Book> tableBook;
public:	  
	void pushAuthor(Author author);
	void pushGenre(Genre genre);
	void pushPublisher(Publisher publisher);
	void pushBook(Book book);

	void showAuthorList();
	void showGenreList();
	void showPublisherList();
	void showBookList();

	bool authorExist(int id);
	bool genreExist(int id);
	bool publisherExist(int id);

	Author getAuthor(int id);
	Genre getGenre(int id);
	Publisher getPublisher(int id);
};