//
// Created by Segev on 2/20/2024.
//
#pragma once
#include <iostream>
using namespace std;
#ifndef UNTITLED_DATE_H
#define UNTITLED_DATE_H


class Date {
private:
    int day, month, year;
public:
    Date();
    Date(int day, int month, int year);
    //Date(Date& other);
    //void operator+=(Date& other);
    bool operator==(Date& other);
    bool operator>(Date& other);
    bool operator<(Date& other);
    friend ostream& operator<<(ostream& os, const Date& other) {
        os << "[" << other.day << "/" << other.month << "/" << other.year << "]";
        return os;
    }
    friend istream& operator>>(istream& is, Date& other) {
        is >> other.day >> other.month >> other.year;
        return is;
    }
    int getDay() { return this->day; }
    int getMonth() { return this->month; }
    int getYear() { return this->year; }



    void printDate();
    int HowManyDays();
    bool Isleapyear();
};


#endif //UNTITLED_DATE_H
