//
// Created by Segev on 2/19/2024.
//

#include "Orders.h"
using namespace std;
#ifndef UNTITLED_FIELD_H
#define UNTITLED_FIELD_H


class Field {
private:
    string fieldType;
    long field_id;
    Orders* orders;
    string city;
    float* rates;
    int numRates;
    int capacity;

public:
    virtual ~Field() {
        delete [] rates;
    }

    Field(const string &fieldType, long fieldId, const string &city) : fieldType(fieldType), field_id(fieldId),
                                                                       city(city), orders(nullptr), rates(nullptr), numRates(0), capacity(0) {}
    // Default constructor for Field class
    Field() : field_id(0), orders(nullptr), rates(nullptr), numRates(0), capacity(0) {}
    float* getRate() const {return rates;}
    long getFieldId() const {return field_id;}
    const string &getFieldType() const {return fieldType;}

    void setFieldType(const string &fieldType) {Field::fieldType = fieldType;}

    Orders *getOrders() const {return orders;}

    void setOrders(Orders *orders) {Field::orders = orders;}

    const string &getCity() const {return city;}

    void setCity(const string &city) {Field::city = city;}

    float *getRates() const {return rates;}

    int getNumRates() const {return numRates;}

    int getCapacity() const {return capacity;}

    Orders* addOrder(const Orders& order);
    void addRate(float player_rate);
};


#endif //UNTITLED_FIELD_H
