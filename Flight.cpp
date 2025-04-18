#include "Flight.h"

// Constructor to initialize flight details and available seats
Flight::Flight(int num, string dest, string time) {
    flightNumber = num;
    destination = dest;
    departureTime = time;

    // Initialize all seats as available (true = Open)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 4; j++) {
            availableSeats[i][j] = true;
        }
    }
}

// Function to display flight details
void Flight::displayFlightDetails() {
    cout << "Flight Number: " << flightNumber << endl;
    cout << "Destination: " << destination << endl;
    cout << "Departure Time: " << departureTime << endl;
}
void Flight::displaySeats() {
    cout << "Seat Map (O = Available, X = Booked):\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 4; j++) {
            cout << (availableSeats[i][j] ? "O " : "X "); // 'O' for open, 'X' for booked
        }
        cout << endl;
    }
}

// Function to book a seat
bool Flight::bookSeat(int row, int col) {
    if (row < 0 || row >= 10 || col < 0 || col >= 4) {
        cout << "Invalid seat selection!\n";
        return false;
    }
    if (!availableSeats[row][col]) {
        cout << "Seat already booked!\n";
        return false;
    }
    
    availableSeats[row][col] = false; // Mark as booked

    return true;
}
