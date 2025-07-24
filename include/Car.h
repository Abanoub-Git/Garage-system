#ifndef CAR_H
#define CAR_H
#include<ctime>
#include<cstdlib>

#include <iostream>
using namespace std;

class Car
{
    public:
         void setname();
         void setmodel();
         void setcolor();
         void setplate();
         void sethours();
         string getname();
         string getmodel();
         string getcolor();
         string getplate();
         int gethours();
         void information();
         void setlocation();
         int getlocation();

    private:
         string model;
         string color;
         string name;
         string plateNumber;
         int hours;
         int location;

};

#endif // CAR_H
