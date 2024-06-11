#pragma once
#include <string>
using namespace std;

const int alpha_size = 26;

class triee {
public:
    class node {
    public:
        string data;
        bool isword;
        node* next[26];
        node() {
            isword = false;
            for (int i = 0; i < 26; i++) {
                next[i] = NULL;

            }
        }
    };

    node* root = new node();

    triee();
    bool isLeafNode(node* n);
    void insert(string s);
    bool search(string s);
    void Triedelete(string s);
    void display(struct node* root, char str[], int level);
    void insert(node* root, char* word);
    void printWord(char* str, int n);
    void printAllWords(node* root, char* wordArray, int pos = 0);

};