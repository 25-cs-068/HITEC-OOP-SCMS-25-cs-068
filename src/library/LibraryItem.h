#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

#include <string>
using namespace std;

class LibraryItem {
protected:
    string itemID;
    string title;
    string author;
    int publicationYear;

public:
    LibraryItem();
    LibraryItem(string id, string t, string a, int year);
    virtual ~LibraryItem();

    virtual void checkout() = 0;

    string getItemID() const;
    string getTitle() const;
    string getAuthor() const;
    int getPublicationYear() const;
};

#endif