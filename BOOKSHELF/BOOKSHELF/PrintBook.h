

#ifndef PBOOK_H
#define PBOOK_H

#include <iostream>
#include <string>
#include "book.h"
using namespace std;

class PrintBook : public Book{
	private:
		int printpages;
	public:
		PrintBook() :Book() {
			printpages = 0;
		}
		int getPrintPages{
			return printpages;
		}
		void setname(string Name) {
			name = Name;
		}
		void setpages(int p) {
			pages = p;
			printpages = p / 16;
		}
};
#endif