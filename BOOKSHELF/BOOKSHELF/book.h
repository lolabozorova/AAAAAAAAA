
#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book {
protected:
	string name;
	unsigned int pages;
public:
	Book() {
		name = " - ";
		pages = 0;
	}
	string getname() {
		return name;
	}
	int getpages() {
		return pages;
	}

	void print() {
		cout << "Book: " << name << ", p." << pages << endl;
	}


};

#endif