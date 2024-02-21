//
// Created by Segev on 2/19/2024.
//

#include "Field.h"


void Field::addRate(float player_rate) {
    if (numRates == capacity)
    {
        int new_capacity;
        if(capacity == 0)
            new_capacity = 1;
        else
            new_capacity = capacity * 2;
        float * newRates = new float [new_capacity];

        for (int i = 0; i < numRates; ++i) {
            newRates[i] = rates[i];
        }

        delete [] rates;
        rates = newRates;
        capacity = new_capacity;
    }
    rates[numRates++] = player_rate;
    cout << "Rating added successfully." << endl;
}
