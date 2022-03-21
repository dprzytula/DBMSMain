#include "Publisher.h"


Publisher addPublisher()
{
	Publisher p;
	cout << "Podaj id wydawnictwa:" << endl;
	cin >> p.idPublisher;
	cout << "Podaj nazwê wydawnictwa:" << endl;
	cin >> p.name;

	return p;
}

void displayPublisher(Publisher p) {
	cout << "ID: " << p.idPublisher << " | Name: " << p.name;
}

