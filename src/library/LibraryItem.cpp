#include "LibraryItem.h"

LibraryItem::LibraryItem() {
    itemID = "";
    title = "";
    author = "";
    publicationYear = 0;
}

LibraryItem::LibraryItem(string id, string t, string a, int year) {
    itemID = id;
    title = t;
    author = a;
    publicationYear = year;
}

LibraryItem::~LibraryItem() {
}

string LibraryItem::getItemID() const { return itemID; }
string LibraryItem::getTitle() const { return title; }
string LibraryItem::getAuthor() const { return author; }
int LibraryItem::getPublicationYear() const { return publicationYear; }