#include "Trie.h"
#include <iostream>
using namespace std;

int main()
{
    Trie mytrie;
    
    cout << mytrie.search("Minna");
    mytrie.insert("Minna");
    mytrie.insert("Amira");
    mytrie.insert("Sara");
    mytrie.insert("Habiba");
    /*mytrie.display(Trie::TrieNode::children);
    cout << mytrie.search("Amira");
    Trie::TrieNode x;
    mytrie.remove(x, "Amira", 0);
    cout << mytrie.search("Amira");*/
}

