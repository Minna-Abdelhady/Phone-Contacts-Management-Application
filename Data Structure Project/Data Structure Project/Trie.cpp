#include <iostream>
#include "Trie.h"
using namespace std;

Trie::TrieNode::TrieNode() {
	children = map<char, Trie::TrieNode>();
	endOfWord = false;
}

bool Trie::TrieNode::empty() {
	if (endOfWord == false && children.empty()) {
		return true;
	}
	return false;
}

Trie::Trie() {
	TrieNode root();
}

void Trie::insert(string word) {
	/*TrieNode node = root;
	for (int i = 0;i < word.size() - 1;i++) {
		if (node.children.find(word[i])->second.empty()) {
			node.children.insert({ word[i],node });
		}
		node = node.children.find(word[i])->second;
	}
	node.endOfWord = true;*/
	TrieNode current = root;
	TrieNode node;
	for (int i = 0;i < word.size();i++) {
		char letter = word[i];
		current.children.insert({ letter,node });
		current = node;
	}
	current.endOfWord = true;
		/*current.children.emplace(letter, node);
		if (!current.children.empty()) {
			//node = new TrieNode();
			//current.children.
			node = current.children.find(letter)->second;
		}
		if (node.empty()) {
			current.children.insert({ letter,node });
			current.children.emplace(letter, node);
		}
		current = current.children;
		//node = node.children.find(letter)->second;*/
}

bool Trie::search(string word) {
	TrieNode current = root;
	if (!current.children.empty()) {
		for (int i = 0;i < word.size() - 1;i++) {
			char letter = word[i];
			TrieNode node = current.children.find(letter)->second;
			if (node.empty()) {		// node does not exist
				return false;
			}
			current = node;
		}
	}
	/*else {
		return false;
	}*/
	// if endOfWord is True then the word exists
	return current.endOfWord;
}

bool Trie::remove(TrieNode current, string word, int index) {
	if (index == word.size()) {
		if (!current.endOfWord) {
			return false;
		}
		current.endOfWord = false;
		if (current.children.size() == 0) {
			return true;
		}
		else {
			return false;
		}
	}
	char letter = word[index];
	TrieNode node = current.children.find(letter)->second;
	if (node.empty()) {
		return false;
	}
	bool removed = remove(node, word, index + 1);
	if (removed) {
		current.children.erase(letter);
		return current.children.size() == 0;
	}
	return false;
}

void Trie::display(map<char, TrieNode>children) {
	map<char, TrieNode>::iterator itr;
	for (itr = children.begin();itr != children.end();itr++) {
		cout << itr->first << "\t" << itr->second.endOfWord;
		cout << endl;
	}
	/*for (int i = 0;i < children.size();i++) {
		cout << children.find(i)->first;
		cout << "\t";
		cout << children.find(i)->second.endOfWord;
		cout << endl;
	}*/
}