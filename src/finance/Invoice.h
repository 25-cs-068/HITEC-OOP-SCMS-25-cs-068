#ifndef INVOICE_H
#define INVOICE_H

#include <string>
using namespace std;

class Invoice {
private:
    int invoiceID;
    string date;
    string* items;
    int itemCount;
    double totalAmount;

    static int invoiceCounter;

public:
    Invoice();
    Invoice(string d, double amount);
    
    Invoice(const Invoice& other);
    Invoice& operator=(const Invoice& other);
    
    ~Invoice();

    void addItem(string itemName);
    void displayInvoice();
    
    static int getInvoiceCounter();
};

#endif