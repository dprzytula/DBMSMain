#include <iostream>
#include <list>
#include "Database.h"

using namespace std;

int main()
{
    Database db;

    db.pushAuthor(addAuthor());
    db.pushGenre(addGenre());
    db.pushPublisher(addPublisher());
    db.pushBook(addBook());

    db.showBookList();

    return 0;
}
