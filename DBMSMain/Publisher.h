#pragma once
#include <iostream>
#include <string>

using namespace std;

struct Publisher {
	int idPublisher;
	string name;
};

Publisher addPublisher();
void displayPublisher(Publisher publisher);
