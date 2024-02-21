//
// Created by Segev on 2/19/2024.
//
#include <iostream>
#include <cstring>
using namespace std;
#ifndef UNTITLED_USER_H
#define UNTITLED_USER_H


class User {
private:
    string name;
    string email;
    long phoneNumber;
    char gender;
    string id;
    string password;


public:
    User(string name, string email, long phoneNum, string id, string pass, char gender);
    virtual ~User() = 0;
    User(const User& user);


    const string &getName() const {
        return name;
    }

    const string &getEmail() const {
        return email;
    }

    long getPhoneNumber() const {
        return phoneNumber;
    }

    const string &getId() const {
        return id;
    }

    const string &getPassword() const {
        return password;
    }

    char getGender() const {
        return gender;
    }

void setName(const string &name) {
    this->name = name;
}

void setEmail(const string &email) {
    this->email = email;
}

void setPhoneNumber(long phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void setPassword(const string &password) {
    this->password = password;
}

void setGender(char gender) {
    this->gender = gender;
}

};


#endif //UNTITLED_USER_H
