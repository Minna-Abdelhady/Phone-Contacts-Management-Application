#include <iostream>
#include "triee.h"
using namespace std;

triee::triee() {
    root->isword = false;
    for (int i = 0; i < alpha_size; i++) {
        root->next[i] = NULL;

    }
}

bool triee::isLeafNode(node* n) {
    for (int i = 0;i < alpha_size;i++) {
        if (n->next[i] != NULL) {
            return false;
        }
    }
    return true;
}

void triee::insert(string s) {
    node* curr = root;
    int index;
    int j = 0;
    for (int i = 0; s[i] != '\0'; ++i){

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
    curr->isword = 1;
}

bool triee::search(string s) {
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

void triee::Triedelete(string s) {
    if (search(s)) {
        node* curr = root;
        int index;
        for (int i = 0; s[i] != '\0'; ++i) {
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

void triee::display(struct node* root, char str[], int level) {
    // If node is leaf node, it indicates end
    // of string, so a null character is added
    // and string is displayed
    if (isLeafNode(root)) {
        str[level] = '\0';
        cout << str << endl;
    }
    for (int i = 0; i < alpha_size; i++) {
        // if NON NULL child is found
        // add parent key to str and
        // call the display function recursively
        // for child node
        if (root->next[i]) {
            str[level] = i + 'a';
            display(root->next[i], str, level + 1);
        }
    }
}

void triee::printWord(char* str, int n) {
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << str[i] << " ";
    }
}

// Print all words in Trie
void triee::printAllWords(node* root, char* wordArray, int pos = 0){
    if (root == NULL)
        return;
    if (isLeafNode(root)) {
        printWord(wordArray, pos);
    }
    for (int i = 0; i < alpha_size; i++) {
        if (root->next[i] != NULL) {
            wordArray[pos] = i + 'a';
            printAllWords(root->next[i], wordArray, pos + 1);
        }
    }
}