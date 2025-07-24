#ifndef PARKING_INFORMATION_H
#define PARKING_INFORMATION_H

#include <iostream>
using namespace std;

class Parking_Information
{
    public:
        Parking_Information();
        void setname();
        string getname();
        void setlocation();
        string getlocation();
        void setopening();
        int getopening();
        void setclose();
        int getclose();
        void setcount();
        int getcount();
        void setcost();
        int getcost();

    private:
        string parking_name;
        string parking_location;
        int time_opening;
        int time_closing;
        int parking_count;
        int parking_cost;

};

#endif // PARKING_INFORMATION_H
