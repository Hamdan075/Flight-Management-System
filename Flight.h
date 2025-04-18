#ifndef FLIGHT_H
#define FLIGHT_H
#include <iostream>
using namespace std;

class Flight {
public:
    int flightNumber;
    string destination;
    string departureTime;
    bool availableSeats[10][4];

    Flight(int num, string dest, string time);
    void displayFlightDetails(); 
    void displaySeats(); 
    bool bookSeat(int row, int col); 
};

#endif

