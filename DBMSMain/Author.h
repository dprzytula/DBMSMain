#pragma once
#include <iostream>
#include <string>

using namespace std;

struct Author {
	int idAuthor;
	string firstName;
	string lastName;
};

Author addAuthor();
void displayAuthor(Author genre);
