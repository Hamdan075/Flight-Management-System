#include "Passenger.h"

Passenger::Passenger(int id, string pname, int fNum, int r, int c) {
    passengerID = id;
    name = pname;
    flightNumber = fNum;
    row = r;
    col = c;
    next = NULL;
}

PassengerList::PassengerList() {
    head = NULL;
}

void PassengerList::addPassenger(int id, string name, int flightNumber, int row, int col) {
    Passenger* newPassenger = new Passenger(id, name, flightNumber, row, col);
    newPassenger->next = head;
    head = newPassenger;
    cout << "Passenger added successfully!\n";
}

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

