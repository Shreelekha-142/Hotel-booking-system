#include<iostream>
#include<string>
using namespace std;

class Room {
private:
    string name;
    bool ac;
    double price;
    bool occupied;
     string room_in;

public:
    Room(string name, bool ac, double price,bool occupied)
        : name(name), ac(ac), price(price), occupied(occupied) {}

    friend class BookingSystem;
};

// Customer class
class Customer {
private:
    string username;
    string password;
    // string startTime;
    // string endTime;
    string meetingDate;
    string roomname;
    

public:
 static int objectCount;
    Customer(string username, string password)//, string startTime, string endTime)
        : username(username), password(password){}//, startTime(startTime), endTime(endTime) {}

    friend class BookingSystem;
};