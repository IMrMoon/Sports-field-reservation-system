//
// Created by Segev on 2/21/2024.
//

#include "Orders.h"

Orders::Orders(const string &orderId, const Date &orderDate, time_t orderTime) : order_id(orderId),
                                                                                 order_date(orderDate),
                                                                                 order_time(orderTime) {}

Orders::~Orders() {

}
