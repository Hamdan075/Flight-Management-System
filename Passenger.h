#ifndef PASSENGER_H
#define PASSENGER_H

#include <iostream>
using namespace std;

class Passenger {
public:
    int passengerID;
    string name;
    int flightNumber;
    int row, col;
    Passenger* next; 

    Passenger(int id, string pname, int fNum, int r, int c);
};

class PassengerList {
private:
    Passenger* head;

public:
    PassengerList();
    void addPassenger(int id, string name, int flightNumber, int row, int col);
    void displayPassengers();
};

#endif

