#include "BookList.h"
#include "Book.h"


BookList::BookList() {

}

BookList::~BookList() {

}

void BookList::search(string t) {

}

void BookList::insert(string t, int q, double p) {
	Book* pointer;
	Book b;
	b.title = t;
	b.quantity = q;
	b.price = p;
	pointer = &b;

	

}

void BookList::remove(string t) {

}

void BookList::print() {

}
