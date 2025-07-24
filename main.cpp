#include <iostream>
#include "ParkingSystem.h"
#include "Car.h"
#include "Parking_Information.h"
#include "account.h"
#include "Cancel_book.h"
using namespace std;

int main()

{
  account obj;
  string ans;
  cout<<"******************** Top Gear Parking ********************"<<endl;
  cout<<endl;
  cout<<"Enter your username"<<endl;
  obj.setuser();
  cout<<"Enter your password"<<endl;
  obj.setpass();
  int x=obj.check();
  if(x)
  {
   cout<<"******************** Welcome Mr:"<<obj.getuser()<<" ********************"<<endl;
   cout<<endl;
   cout<<"Chose from the Menu:"<<endl<<endl;
   cout<<"1-Show information about Parking"<<endl;
   cout<<"2-Book"<<endl;
   cout<<"3-Cancel book"<<endl;
   cout<<"4-Calculate"<<endl;
   cout<<"5-Update System information"<<endl;
   cout<<"6-Add new Employee "<<endl;
   cout<<"7-Exit"<<endl<<endl;
  }
  else
  {
   cout<<"invalid Username OR password"<<endl;
   cout<<"Do you want to try again?"<<endl;
   cin>>ans;
   if(ans=="yes"||ans=="Yes")
   {
    cout<<"Enter your username"<<endl;
    obj.setuser();
    cout<<"Enter your password"<<endl;
    obj.setpass();
    int x=obj.check();
    if(x)
    {
     cout<<"******************** Welcome Mr:"<<obj.getuser()<<" ********************"<<endl;
     cout<<endl;
     cout<<"Chose from the Menu : "<<endl<<endl;
     cout<<"1-Show information about Parking"<<endl;
     cout<<"2-Book"<<endl;
     cout<<"3-Cancel book"<<endl;
     cout<<"4-Calculate"<<endl;
     cout<<"5-Update System information"<<endl;
     cout<<"6-Add new Employee "<<endl;
     cout<<"7-Exit"<<endl<<endl;
    }
    else{
        cout<<"not valid"<<endl;
        return 0;
    }

   }
   else
    {
     cout<<"Hope you to try later"<<endl;
     return 0;
    }

}
int num;
for(int i=0;i<10;i++)
{
 cout<<"Enter your choice from Menu : "<<endl;
 cin>>num;
 if(num==1)
 {
  Parking_Information obj1;
  cout<<endl;
 }

 else if(num==2)
 {
  ParkingSystem obj;
  obj.Book();
  cout<<endl;

 }
 else if(num==3)
 {
  Cancel_book obj3;
  obj3.setName();
  obj3.setReason();
  obj3.Registration();
  cout<<"Thank you for your visit"<<endl<<endl;

 }
 else if(num==4)
 {
  int c,t;
  string type;
  ParkingSystem obj4;
  cout<<"Enter the type of your car : "<<endl;
  cin>>type;
  if(type=="truck"||type=="Truck")
  {
   cout<<obj4.Calculate(c,t)<<"$"<<endl<<endl;
  }
  else
  {
   cout<<obj4.Calculate(c)<<"$"<<endl<<endl;
  }
 }
 else if(num==5)
 {
  Parking_Information obj5;
  obj5.setname();
  obj5.setlocation();
  obj5.setopening();
  obj5.setclose();
  obj5.setcount();
  obj5.setcost();
  cout<<endl;
 }
 else if(num==6)
 {
  ParkingSystem emp[10];
  int n;
  cout<<"Enter number of Employees : "<<endl;
  cin>>n;
  for(int i=0;i<n;i++)
  {
   emp[i].setdata();
  }
  cout<<"Update is done"<<endl<<endl;
 }
 else if(num==7)
 {
  cout<<"thank you"<<endl;
  return 0;
 }
 else
 {
  cout<<"Not found"<<endl;
 }
}


}
