//
// Created by Segev on 2/19/2024.
//

#include <limits>
#include "Manager.h"

void Manager::edit_manager_details() {
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

    // Variables to store new manager details
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


void Manager::addField(const Field &new_field) {
    if (numFields < maxFields) {
        manager_fields[numFields++] = new_field;
        cout << "Field added successfully." << endl;
    } else {
        // Need to resize the array
        maxFields = (maxFields == 0) ? 1 : maxFields * 2;
        Field* newManagerFields = new Field[maxFields];

        // Copy existing fields to the new array
        for (int i = 0; i < numFields; ++i) {
            newManagerFields[i] = manager_fields[i];
        }

        // Add the new field
        newManagerFields[numFields++] = new_field;

        // Deallocate memory for the old array
        delete[] manager_fields;

        // Update the pointer to the new array
        manager_fields = newManagerFields;

        cout << "Field added successfully." << endl;
    }
}

void Manager::deleteField(long field_id_to_delete) {
    int index = -1;
    for (int i = 0; i < numFields; ++i) {
        if (manager_fields[i].getFieldId() == field_id_to_delete) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        for (int i = index; i < numFields - 1; ++i) {
            manager_fields[i] = manager_fields[i + 1];
        }
        numFields--;
        cout << "Field with ID " << field_id_to_delete << " deleted successfully." << endl;
    } else {
        cout << "Field with ID " << field_id_to_delete << " not found." << endl;
    }
}

float Manager::view_rate() const {
    if (numFields == 0) {
        cout << "No fields available to calculate the rate." << endl;
        return 0.0; // Return 0 if there are no fields
    }

    float totalRate = 0.0;
    int totalRatesCount = 0;

    // Iterate over each field and calculate the total rate
    for (int i = 0; i < numFields; ++i) {
        float* fieldRates = manager_fields[i].getRate();
        int fieldNumRates = manager_fields[i].getNumRates();

        // Sum up rates for the current field
        for (int j = 0; j < fieldNumRates; ++j) {
            totalRate += fieldRates[j];
            totalRatesCount++;
        }
    }

    // Calculate the average rate
    if (totalRatesCount > 0) {
        return totalRate / totalRatesCount;
    } else {
        cout << "No rates available to calculate the average rate." << endl;
        return 0.0; // Return 0 if there are no rates
    }
}
