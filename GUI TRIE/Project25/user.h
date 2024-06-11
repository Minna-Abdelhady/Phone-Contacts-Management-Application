#pragma once
#include "triee.h"
#include <vector>
class user {
public:
    vector<string>vec;
    triee t;
    string name;
    int phone;
    char a[100];
    user() {

    }
   
    void add() {
        t.insert(name,phone);
    }
    void viewuser() {
        cout << name;
        cout << phone;
    }
    bool search(string s) {
        return t.search(s);

    }
    void del_user(string s) {

        t.Triedelete(s);
        phone = NULL;
    }
    void viewall() {
        char arr[100];
        t.printAllWords(t.root,a);
    }
};
