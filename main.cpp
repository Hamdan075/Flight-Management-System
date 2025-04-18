#include <iostream>
#include "Flight.h"
#include "Passenger.h"
using namespace std;

int main() {

    Flight flights[] = {
        Flight(101, "New York", "08:00 AM"),
        Flight(102, "London", "10:30 AM"),
        Flight(103, "Dubai", "02:00 PM")
    };
    PassengerList passengerList;
    int totalFlights = sizeof(flights) / sizeof(flights[0]);
    int choice;
    int passengerID = 1;
    cout << "\n===== SkySurfer Airlines =====\n";
        cout << "1. View Available Flights\n";
        cout << "2. View Seat Availability\n";
        cout << "3. Book a Seat\n";
        cout << "4. View Passengers\n";
        cout << "0. Exit\n";
      while (true) {
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting... Safe travels!\n";
            break;
        }

        switch (choice) {
            case 1:
                cout << "Available Flights:\n";
                for (int i = 0; i < totalFlights; i++) {
                    flights[i].displayFlightDetails();
                    cout << "--------------------------\n";
                }
                break;
                
            case 2: {
                int flightNum;
                cout << "Enter flight number: ";
                cin >> flightNum;
                bool found = false;
                for (int i = 0; i < totalFlights; i++) {
                    if (flights[i].flightNumber == flightNum) {
                        flights[i].displaySeats();
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Flight not found!\n";
                break;
            }

            case 3: {
    int flightNum, row, col;
    string name;
    cout << "Enter flight number: ";
    cin >> flightNum;
    bool found = false;
    for (int i = 0; i < totalFlights; i++) {
        if (flights[i].flightNumber == flightNum) {
            flights[i].displaySeats();
            cout << "Enter row (0-9): ";
            cin >> row;
            cout << "Enter column (0-3): ";
            cin >> col;
            bool success = flights[i].bookSeat(row, col);
            if (success) {
                cout << "Enter passenger name: ";
                cin.ignore(); 
                getline(cin, name);
                passengerList.addPassenger(passengerID++, name, flightNum, row, col);
                cout << "Seat booked successfully!\n";
            }
            found = true;
            break;
        }
    }
    if (!found) cout << "Flight not found!\n";
    break;
}

            case 4:
                passengerList.displayPassengers();
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}

