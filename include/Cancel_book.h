#ifndef CANCEL_BOOK_H
#define CANCEL_BOOK_H
#include<iostream>
using namespace std;

class Cancel_book
{
    public:
        void setReason();
        void setName();
        void Registration();
        string getReason();
        string getName();

    private:
        string Reason;
        string Name;
};

#endif // CANCEL_BOOK_H
