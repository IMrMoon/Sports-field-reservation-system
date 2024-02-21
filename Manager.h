//
// Created by Segev on 2/19/2024.
//
#include "User.h"
#include "Field.h"
#ifndef UNTITLED_MANAGER_H
#define UNTITLED_MANAGER_H


class Manager : public User{
private:
    Field* manager_fields;
    float manager_rate;

public:
    Manager(const string &name, const string &email, long phoneNum, const string &id, const string &pass, char gender) :
            User(name, email, phoneNum, id, pass, gender){};
    virtual ~Manager() {};
    Field *getManagerFields() const {return manager_fields;}
    void setManagerFields(Field *managerFields) {manager_fields = managerFields;}
    float get_Manager_rate() {return manager_rate;}

    void addField(const Field& new_field);
    void deleteField();
    void edit_manager_details();
    float view_rate();
    void mark_dates_as_unavailable();
    void view_field_orders(long field_id);
    void view_orders_by_date(const Date& other_date);



};


#endif //UNTITLED_MANAGER_H
