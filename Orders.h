//
// Created by Segev on 2/21/2024.
//
#include <iostream>
#include <cstring>
#include "Date.h"
#include <ctime>
#ifndef UNTITLED_ORDERS_H
#define UNTITLED_ORDERS_H


class Orders {
private:
    string order_id;
    Date order_date;
    time_t order_time;
public:
    Orders(const string &orderId, const Date &orderDate, time_t orderTime);
    virtual ~Orders();

    const string &getOrderId() const {return order_id;}

    const Date &getOrderDate() const {return order_date;}

    time_t getOrderTime() const {return order_time;}
    void setOrderId(const string &orderId) {order_id = orderId;}

    void setOrderDate(const Date &orderDate) {order_date = orderDate;}

    void setOrderTime(time_t orderTime) {order_time = orderTime;}
    void print_order();



};


#endif //UNTITLED_ORDERS_H
