#pragma once
#include <iostream>
#include <string>

using namespace std;

struct Book {
	int idBook;
	int idAuthorFK;
	int idGenreFK;
	int idPublisherFK;
	string title;
};

Book addBook();
