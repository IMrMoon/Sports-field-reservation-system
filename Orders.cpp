//
// Created by Segev on 2/21/2024.
//

#include "Orders.h"

Orders::Orders(const string &orderId, const Date &orderDate, time_t orderTime) : order_id(""),
                                                                                 order_date(Date()),
                                                                                 order_time(0) {}

void Orders::print_order() {
        cout << "Order ID: " << order_id << endl;
        cout << "Order Date: " << order_date << endl; // Assuming Date class has a toString() function
        cout << "Order Time: " << ctime(&order_time); // Convert time_t to string and print
}

