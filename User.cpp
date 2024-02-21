//
// Created by Segev on 2/19/2024.
//

#include "User.h"

User::User(string name, string email, long phoneNum, string id, string pass, char gender) {
    this->name = name;
    this->email = email;
    this->phoneNumber = phoneNum;
    this->id = id;
    this->password = pass;
    this->gender = gender;
}

User::User(const User &user) {
    this->name = user.name;
    this->email = user.email;
    this->phoneNumber = user.phoneNumber;
    this->id = user.id;
    this->password = user.password;
    this->gender = user.gender;
}

