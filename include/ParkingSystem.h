#ifndef PARKINGSYSTEM_H
#define PARKINGSYSTEM_H
#include "Car.h"
#include <iostream>

using namespace std;

class ParkingSystem : public Car
{
    public:
        void Book();
        int Calculate(int cost);
        int Calculate(int cost,int tax);
        void Receipt();
        void setdata();

    private:
        string user;
        int password;

};
#endif // PARKINGSYSTEM_H
