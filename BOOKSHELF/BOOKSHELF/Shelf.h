#ifndef SHELF_H
#define SHELF_H


#include <iostream>
#include <string>
#include <vector>
#include "book.h"
#include "PrintBook.h"
using namespace std;

class Shelf {
	protected:
		vector<PrintBook> pbooks;
	public:
		//		Shelf() {	}
		void addBook(PrintBook pb) {
			pbooks.push_back(pb);
		}
		PrintBook get(int id) {
			return pbooks;
		}
		void Print(){
			cout << "Shelf contents: \n";
			for (int i = 0; i < pbooks.size(); i++) {
				pbooks[i].PrintBook()
			}
		}
};

#endif