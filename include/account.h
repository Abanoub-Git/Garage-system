#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<iostream>
using namespace std;

class account
{
    public:
      void setuser();
      void setpass();
      string getuser();
      string getpass();
      int check();


    protected:

    private:
        string name;
        string pass;
};

#endif // ACCOUNT_H
