#pragma once
#include <iostream>
#include<string>;
#include<vector>;

using namespace std;
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')

class node {
public:
    string data;
    bool isword;
    int number;
    node* next[26];
    node() {
        isword = false;
        for (int i = 0; i < 26; i++) {
            next[i] = NULL;

        }
    }
    void setChar(char ch) { this->data = ch; }
};
class triee {
public:

    node* root = new node();
    triee() {

        root->isword = false;

    }

    void insert(string s,int n)
    {
        node* curr = root;
        int index;
        int j = 0;
        for (int i = 0; s[i] != '\0'; ++i)
        {

            index = s[i] - 'a';
            if (curr->next[index] == NULL) {
                node* ch = new node();
                ch->data = s[i];
                curr->next[index] = ch;
            }
            // curr->next[index]->isword += 1;
            curr = curr->next[index];
            j++;


        }
        if (lastnode(s)) {
            curr->number = n;
        }
        curr->isword = true;
    }


    bool search(string s)
    {
        node* curr = root;
        int index;
        for (int i = 0; s[i] != '\0'; ++i)
        {
            index = s[i] - 'a';
            if (curr->next[index] == NULL)
                return false;
            curr = curr->next[index];
        }
        if (curr->isword == 1)
            return true;
        else
            return false;
    }
   /* bool search(int  number)
    {
        node* curr = root;
        int index;
        for (int i = 0; s[i] != '\0'; ++i)
        {
            index = s[i] - 'a';
            if (curr->next[index] == NULL)
                return false;
            curr = curr->next[index];
        }
        if (curr->isword == 1)
            return true;
        else
            return false;
    }*/

    void Triedelete(string s)
    {
        if (search(s))
        {
            node* curr = root;
            int index;
            for (int i = 0; s[i] != '\0'; ++i)
            {
                index = s[i] - 'a';

                if (curr->next[index]->isword == 1) {
                    curr->next[index]->isword = 0;
                }
                curr = curr->next[index];
            }
        }
        else
            cout << "trie not exist";
    }
    node* lastnode(string s) {
        node* curr = root;
        int index;
        for (int i = 0; s[i] != '\0'; ++i)
        {
            index = s[i] - 'a';
            if (curr->next[index] == NULL)
                break;
            curr = curr->next[index];
        }

        return curr;

    }
    void prefix(string s) {
        node* curr;
        curr = lastnode(s);
        char arr[100];

        // printWordd(s);

        if (searchfornode(s) == true)
            printAllWordss(s, curr, arr, 0);



    }
    bool isLastNode(node* root)
    {
        for (int i = 0; i < 26; i++)
            if (root->next[i])
                return 0;
        return 1;
    }
    void printstring(string s) {

        cout << s;
    }
    string printWordd(string s, char* str, int n)
    {
        string a;
        cout << endl;
        printstring(s);
        for (int i = 0; i < n; i++)
        {
            cout << str[i];
        }
        return a;
    }
    // Helper function to print the word found
    void printWord(char* str, int n)
    {
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << str[i];
        }
    }
    void printAllWordss(string s, node* root, char* wordArray, int pos = 0)
    {
        if (root == NULL)
            return;
        if (root->isword == 1)
        {
            printstring(printWordd(s, wordArray, pos));
        }
        for (int i = 0; i < 26; i++)
        {
            if (root->next[i] != NULL)
            {
                wordArray[pos] = i + 'a';
                printAllWordss(s, root->next[i], wordArray, pos + 1);
            }
        }
    }
    // Print all words in Trie
    void printAllWords(node* root, char* wordArray, int pos = 0)
    {
        if (root == NULL)
            return;
        if (root->isword == 1)
        {
            printWord(wordArray, pos);
        }
        for (int i = 0; i < 26; i++)
        {
            if (root->next[i] != NULL)
            {
                wordArray[pos] = i + 'a';
                printAllWords(root->next[i], wordArray, pos + 1);
            }
        }
    }
   

    bool searchfornode(string s)
    {
        node* curr = root;
        int index;
        for (int i = 0; s[i] != '\0'; ++i)
        {
            index = s[i] - 'a';
            if (curr->next[index] == NULL)
                return false;
            curr = curr->next[index];
        }
        return true;
    }
};





