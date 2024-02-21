//
// Created by Segev on 2/19/2024.
//

#include <limits>
#include "Player.h"


void Player::edit_player_details() {
    int choice;
    bool validChoice = false;

    cout << "Choose the detail you want to change: \n"
         << "1. Name \n"
         << "2. Email \n"
         << "3. Phone Number \n"
         << "4. Password \n"
         << "5. Gender" << endl;

    // Validate user input
    while (!validChoice) {
        cout << "Enter your choice (1-5): ";
        if (!(cin >> choice) || choice < 1 || choice > 5) {
            cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
            cin.clear();
            while (cin.get() != '\n') // Clear input buffer
                continue;
        } else {
            validChoice = true;
        }
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear remaining newline character

    // Variables to store new user details
    string newName, newEmail, newPassword;
    long newPhoneNumber;
    char newGender;

    switch (choice) {
        case 1:
            cout << "Enter new name: ";
            getline(cin, newName);
            setName(newName); // Assuming there's a setName function in the User class
            cout << "Name updated successfully." << endl;
            break;
        case 2:
            cout << "Enter new email: ";
            getline(cin, newEmail);
            setEmail(newEmail); // Assuming there's an setEmail function in the User class
            cout << "Email updated successfully." << endl;
            break;
        case 3:
            cout << "Enter new phone number: ";
            while (!(cin >> newPhoneNumber)) {
                cout << "Invalid phone number. Please enter a valid number: ";
                cin.clear();
                while (cin.get() != '\n') // Clear input buffer
                    continue;
            }
            setPhoneNumber(newPhoneNumber); // Assuming there's a setPhoneNumber function in the User class
            cout << "Phone number updated successfully." << endl;
            break;
        case 4:
            cout << "Enter new password: ";
            getline(cin, newPassword);
            setPassword(newPassword); // Assuming there's a setPassword function in the User class
            cout << "Password updated successfully." << endl;
            break;
        case 5:
            cout << "Enter new gender: ";
            cin >> newGender;
            setGender(newGender); // Assuming there's a setGender function in the User class
            cout << "Gender updated successfully." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }
}
