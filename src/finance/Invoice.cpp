#include "Invoice.h"
#include <iostream>
using namespace std;

int Invoice::invoiceCounter = 0;

Invoice::Invoice() {
    invoiceID = ++invoiceCounter;
    date = "";
    itemCount = 0;
    totalAmount = 0.0;
    items = new string[10];
}

Invoice::Invoice(string d, double amount) {
    invoiceID = ++invoiceCounter;
    date = d;
    totalAmount = amount;
    itemCount = 0;
    items = new string[10];
}

Invoice::Invoice(const Invoice& other) {
    invoiceID = ++invoiceCounter;
    date = other.date;
    itemCount = other.itemCount;
    totalAmount = other.totalAmount;
    items = new string[10];
    for (int i = 0; i < itemCount; i++) {
        items[i] = other.items[i];
    }
}

Invoice& Invoice::operator=(const Invoice& other) {
    if (this != &other) {
        invoiceID = ++invoiceCounter;
        date = other.date;
        itemCount = other.itemCount;
        totalAmount = other.totalAmount;
        delete[] items;
        items = new string[10];
        for (int i = 0; i < itemCount; i++) {
            items[i] = other.items[i];
        }
    }
    return *this;
}

Invoice::~Invoice() {
    delete[] items;
}

void Invoice::addItem(string itemName) {
    if (itemCount < 10) {
        items[itemCount] = itemName;
        itemCount++;
    }
}

void Invoice::displayInvoice() {
    cout << "--- Invoice #" << invoiceID << " ---" << endl;
    cout << "Date: " << date << endl;
    cout << "Items:" << endl;
    for (int i = 0; i < itemCount; i++) {
        cout << "- " << items[i] << endl;
    }
    cout << "Total Amount: " << totalAmount << endl;
}

int Invoice::getInvoiceCounter() {
    return invoiceCounter;
}