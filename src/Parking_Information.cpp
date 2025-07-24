#include "ParkingSystem.h"
#include "Car.h"
#include "Parking_Information.h"

Parking_Information::Parking_Information()
{
  parking_name="Top Gear parking";
  parking_location="6th of October City";
  time_opening=7;
  time_closing=12;
  parking_count=150;
  parking_cost=10;
  cout<<"parking_name:"<<parking_name<<endl;
  cout<<"parking_location:"<<parking_location<<endl;
  cout<<"time_opening:"<<time_opening<<"am"<<endl;
  cout<<"time_closing:"<<time_closing<<"pm"<<endl;
  cout<<"parkin_count:"<<parking_count<<"Car"<<endl;
  cout<<"parking_cost:"<<parking_cost<<"$ for hour"<<endl;
}

void Parking_Information:: setname()
{
    string n;
  cout<<"Enter your new parking : "<<endl;
  cin>>n;
  parking_name=n;
}

string Parking_Information:: getname()
{
  return parking_name;
}

void Parking_Information:: setlocation()
{
    string loc;
  cout<<"Enter your new location"<<endl;
  cin>>loc;
  parking_location=loc;
}

string Parking_Information:: getlocation()
{
  return parking_location;
}

void Parking_Information:: setopening()
{
    int op;
  cout<<"Enter your new time opening : "<<endl;
  cin>>op;
  time_opening=op;
}

int Parking_Information:: getopening()
{
  return time_opening;
}

void Parking_Information:: setclose()
{
    int clo;
  cout<<"Enter your new time ending : "<<endl;
  cin>>clo;
  time_closing=clo;
}

int Parking_Information:: getclose()
{
  return time_closing;
}

void Parking_Information:: setcount()
{
    int c;
  cout<<"Enter your new count of parking : "<<endl;
  cin>>c;
  parking_count=c;
}

int Parking_Information:: getcount()
{
  return parking_count;
}

void Parking_Information:: setcost()
{
    int co;
  cout<<"Enter your new cost : "<<endl;
  cin>>co;
  parking_cost=co;
}

int Parking_Information:: getcost()
{
  return parking_cost;
}
