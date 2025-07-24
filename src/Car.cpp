#include "ParkingSystem.h"
#include "Car.h"
#include "Parking_Information.h"
#include <fstream>

void Car::setname()
{
    string n;
  cout<<"Enter your name : "<<endl;
  cin>>n;
  name=n;
}

void Car::setmodel()
{
    string m;
  cout<<"Enter your car model : "<<endl;
  cin>>m;
  model=m;
}

void Car::setcolor()
{
    string c;
  cout<<"Enter your car color : "<<endl;
  cin>>c;
  color=c;
}
string Car::getname()
{
  return name;
}

string Car::getmodel()
{
  return model;
}

string Car::getcolor()
{
  return color;
}

void Car:: setplate()
{
    string p;
  cout<<"Enter your plate number : "<<endl;
  cin>>p;
  plateNumber=p;
}

string Car:: getplate()
{
  return plateNumber;
}
void Car::setlocation(){
srand(time(0));
location=rand()%50+1;
}
int Car::getlocation(){
return location;

}

void Car::sethours()
{
    int h;
  cout<<"Enter number of hours : "<<endl;
  cin>>h;
  hours=h;
}

int Car::gethours()
{
    return hours;
}

void Car::information()
{
  string name,plate,model,color;
  ofstream Data;
  Data.open("User Information",ios::app);
  Data<<"User name : ";
  Data<<getname()<<endl;
  Data<<"Car plate : ";
  Data<<getplate()<<endl;
  Data<<"Car model : ";
  Data<<getmodel()<<endl;
  Data<<"Car color : ";
  Data<<getcolor()<<endl;
  Data<<"Car location : ";
  Data<<getlocation()<<endl;
  Data<<"-------------------------------------------------"<<endl;
  Data.close();
}
