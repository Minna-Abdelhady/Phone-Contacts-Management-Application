#pragma once
#include <map>
#include<string>
using namespace std;

class Trie
{

public:
	class TrieNode {
	public:
		map<char, TrieNode>children;
		bool endOfWord;
		TrieNode();
		bool empty();
	};
	TrieNode root;
public:
	Trie();
	void insert(string word);
	bool search(string word);
	bool remove(TrieNode current, string word, int index);
	void display(map<char, TrieNode>children);
};

