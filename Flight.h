#ifndef FLIGHT_H
#define FLIGHT_H
#include <iostream>
using namespace std;

class Flight {
public:
    int flightNumber;
    string destination;
    string departureTime;
    bool availableSeats[10][4]; // 10 rows, 4 seats per row (O = Open, X = Booked)

    Flight(int num, string dest, string time); // Constructor
    void displayFlightDetails(); // Display flight details
    void displaySeats(); // Show seat availability
    bool bookSeat(int row, int col); // Book a seat
};

#endif

