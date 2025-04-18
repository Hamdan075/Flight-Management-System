#include "Passenger.h"

// Constructor for Passenger node
Passenger::Passenger(int id, string pname, int fNum, int r, int c) {
    passengerID = id;
    name = pname;
    flightNumber = fNum;
    row = r;
    col = c;
    next = NULL;
}

// Constructor for Passenger list
PassengerList::PassengerList() {
    head = NULL;
}

// Function to add a passenger
void PassengerList::addPassenger(int id, string name, int flightNumber, int row, int col) {
    Passenger* newPassenger = new Passenger(id, name, flightNumber, row, col);
    newPassenger->next = head;
    head = newPassenger;
    cout << "Passenger added successfully!\n";
}

// Function to display all passengers
void PassengerList::displayPassengers() {
    if (head == NULL) {
        cout << "No passengers booked yet!\n";
        return;
    }

    Passenger* temp = head;
    cout << "Passenger List:\n";
    while (temp != NULL) {
        cout << "ID: " << temp->passengerID 
             << ", Name: " << temp->name 
             << ", Flight: " << temp->flightNumber 
             << ", Seat: Row " << temp->row << " Col " << temp->col << endl;
        temp = temp->next;
    }
}

