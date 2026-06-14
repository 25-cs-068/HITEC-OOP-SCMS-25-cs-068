#ifndef BOOK_H
#define BOOK_H

#include "LibraryItem.h"
#include <string>
using namespace std;

class Book : public LibraryItem {
private:
    string ISBN;
    string genre;
    int copiesAvailable;

public:
    Book();
    Book(string id, string t, string a, int year, string isbn, string g, int copies);
    ~Book();

    void checkout();

    string getISBN() const;
    string getGenre() const;
    int getCopiesAvailable() const;
    void setCopiesAvailable(int c);
};

#endif