#include "Cancel_book.h"
#include <iostream>
#include <fstream>
#include "ParkingSystem.h"
#include "Car.h"
#include "Parking_Information.h"
#include "account.h"
#include <string>
#include <algorithm>

void Cancel_book:: setReason()
{
  cout<<"Why do you want to cancel your book?"<<endl;
  string R;
  cin.ignore(numeric_limits<streamsize>::max(),'\n');
  getline(cin,R);
  Reason=R;
}


void Cancel_book:: setName()
{
    string N;
    cout<<"Enter your name : "<<endl;
    cin>>N;
    Name=N;
}


string Cancel_book:: getReason()
{
    return Reason;
}


string Cancel_book:: getName()
{
    return Name;
}
void Cancel_book:: Registration()
{
    ofstream Data;
    Data.open("Canceling Information",ios::app);
    Data<<"User name : ";
    Data<<getName()<<endl;
    Data<<"Reason : ";
    Data<<getReason()<<endl;
    Data<<"----------------------------------------------"<<endl;
}
