//
// Created by Segev on 2/19/2024.
//
#include "User.h"
#include "Orders.h"
#ifndef UNTITLED_PLAYER_H
#define UNTITLED_PLAYER_H


class Player : public User{
private:


public:
    Player(const string &name, const string &email, long phoneNum, const string &id, const string &pass, char gender) :
    User(name, email, phoneNum, id, pass, gender) {};
    virtual ~Player() {};

    Orders& schedule_game();
    void delete_game_order(Date date, time_t order_time, string field_type);
    void view_fields_by_fieldType();
    void view_fields_by_city();
    void edit_player_details();
    void view_player_games();
    void view_previous_games();
    void field_rate();
};


#endif //UNTITLED_PLAYER_H
