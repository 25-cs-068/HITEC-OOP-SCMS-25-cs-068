#include "Book.h"
#include <iostream>
using namespace std;

Book::Book() : LibraryItem() {
    ISBN = "";
    genre = "";
    copiesAvailable = 0;
}

Book::Book(string id, string t, string a, int year, string isbn, string g, int copies) 
    : LibraryItem(id, t, a, year) {
    ISBN = isbn;
    genre = g;
    copiesAvailable = copies;
}

Book::~Book() {
}

void Book::checkout() {
    if (copiesAvailable > 0) {
        copiesAvailable--;
        cout << "Book checked out successfully." << endl;
    } else {
        cout << "No copies available!" << endl;
    }
}

string Book::getISBN() const { return ISBN; }
string Book::getGenre() const { return genre; }
int Book::getCopiesAvailable() const { return copiesAvailable; }
void Book::setCopiesAvailable(int c) { copiesAvailable = c; }