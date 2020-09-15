#ifndef BSHELF_H
#define BSHELF_H

#include <iostream>
#include <string>
#include <vector>
#include "book.h"
#include "PrintBook.h"
#include "Shelf.h"
using namespace std;

class BookShelf {
protected:
	vector<Shelf> shelves;
public:
	void addBook(PrintBook pb; int shelf_id) {
		if (shelf_id < shelves.size() - 1) {
			shelves[shelf_id].addBook(pb);
		}
		else {
			cout << "Error in Shelf ID \n";
		}

	}
	PrintBook getBook(int shelf_id, int book_id) {
		if (shelf_id < shelves.size() - 1) {
			shelves[shelf_id].getBook(book_id);
		}
		else {
			cout << "Error in Shelf ID \n";
		}
	}
	void addShelf() {
		Shelf shelf;
		shelves.push_back(shelf);
	}
	void Print() {
		cout << "Bookshelf info: " << shelves.size() << "\n";
		for (int i = 0; i < shelves.size(); i++) {
			cout << "\t Shelf #" << i + 1 << "\n";
			shelves[i].Print()
		}


	}




};
#endif

