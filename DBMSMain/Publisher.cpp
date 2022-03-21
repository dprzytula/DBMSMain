#include "Publisher.h"


Publisher addPublisher()
{
	Publisher p;
	cin >> p.idPublisher;
	cin >> p.name;

	return p;
}

void displayPublisher(Publisher p) {
	cout << "ID: " << p.idPublisher << " | Name: " << p.name;
}

