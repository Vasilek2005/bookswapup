#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
//template<typename T>
// type class ochish oddiy class o'rniga
class books {

public:
    ofstream first;
    string namebook;
    string owner;
    int phonenumber;
    string description;

    //callingfunction

public:
    books() {
        ofstream file("library1.txt", ios::app);
        ofstream first;
        first.open("library1.txt", ios::app);
        cout << "\nName of book:"; cin >> namebook;
        first << "\nName of book:" << namebook << endl;
        cout << "\nName of owner of this book:"; cin >> owner;
        first << "\nName of owner of this book:" << owner; cout << endl;
        cout << "\nPhone number of the owner: "; cin >> phonenumber;
        first << "\nPhone number of the owner: " << phonenumber; cout << endl;
        cout << "\nDscription of this book: "; cin >> description;
        first << "\nDscription of this book: " << description; cout << endl;


    }
};
//type of class
class action :public books {
public:
    action() :books() {

    }
    void actionB() {

        cout << "\nACTION BOOKS!";
    }



};
class horror :public books {
public:
    horror() :books() {

    }
    void horrorB() {
        cout << "\nHORROR BOOKS!";


    }
};
class fantasy :public books {
public:
    fantasy() :books() {

    }
    void fantasyB() {
        cout << "\nFANTASY BOOKS!";


    }
};