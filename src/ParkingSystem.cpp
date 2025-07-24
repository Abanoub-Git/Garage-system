#include <iostream>
#include <fstream>
#include <string>
#include "ParkingSystem.h"
#include "Car.h"
#include "Parking_Information.h"
#include "account.h"

string area;
int timein;
void ParkingSystem:: Book()
{
  setname();
 setmodel();
 setplate();
 setcolor();
 sethours();
 setlocation();
 cout<<"Enter Time In:"<<endl;
 cin>>timein;
  if(getmodel()=="truck"||getmodel()=="Truck")
  {
   area="floor1";
  }
  else if(getmodel()=="taxi"||getmodel()=="Taxi")
  {
   area="floor2";
  }
  else
  {
   area="floor3";
  }
  cout<<"The book is done."<<endl;
  information();
  Receipt();
}

 int ParkingSystem:: Calculate(int cost ,int tax)
 {
  int total_cost;
  cout<<"Enter cost for one hour : "<<endl;
  cin>>cost;
  tax=cost*0.1;
  cout<<"Tax = "<<tax<<endl;
  total_cost=gethours()*cost+tax;
  cout<<"Total cost = ";
  return total_cost;
 }

int ParkingSystem:: Calculate(int cost)
 {
  int total_cost;
  cout<<"Enter cost for one hour : "<<endl;
  cin>>cost;
  total_cost=gethours()*cost;
  cout<<"Total cost = ";
  return total_cost;
 }

void ParkingSystem:: Receipt()
{
  cout<<"******************** Top Gear Parking ********************"<<endl;
  ifstream file("Manager.txt");
  while(true)
  {
   string n;
   int hour;
   int x=timein;
   for(int i=0;i<3;i++)
   {
   file>>n>>hour;
   if(x==hour)
   {
    break;
   }
   }
   cout<<"The Manager now is :"<<n<<"    His time working from :"<<x<<endl;
   break;
   if(file.fail())
   {
       break;
   }
   file.close();
  }
  cout<<"Guest:"<<getname()<<endl;
  cout<<"Car model:"<<getmodel()<<endl;
  cout<<"Area:"<<area<<endl;
  cout<<"Location:"<<getlocation()<<endl;
  cout<<"Time in:"<<timein<<endl;
  cout<<"Time Out:"<<gethours()+timein<<endl;
  cout<<"Thank you for your visit "<<endl;
}

void ParkingSystem ::setdata()
{
  int time;
  string empl;
  ofstream file;
  file.open("Manager.txt",ios::app);
  cout<<"Enter Name of employee : "<<endl;
  cin>>empl;
  file<<empl<<"\t";
  cout<<"Enter time he started from : "<<endl;
  cin>>time;
  file<<time<<endl;
  file.close();
}

