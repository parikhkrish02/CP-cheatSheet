#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    TrieNode *arr[26];
    bool flag;

    bool containsKey(char c)
    {
        return (arr[c - 'a'] != nullptr);
    }

    TrieNode *next(char c)
    {
        return arr[c - 'a'];
    }

    void insertNode(char c)
    {
        TrieNode *n = new TrieNode();
        arr[c - 'a'] = n;
    }
};

class Trie
{
public:
    TrieNode *root;
    Trie()
    {
        root = new TrieNode();
    }

    void insert(string word)
    {
        TrieNode *node = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (!node->containsKey(word[i]))
            {
                node->insertNode(word[i]);
            }
            node = node->next(word[i]);
        }
        node->flag = true;
    }

    bool search(string word)
    {
        TrieNode *temp = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (!temp->containsKey(word[i]))
            {
                return false;
            }
            temp = temp->next(word[i]);
        }
        return temp->flag;
    }

    bool startsWith(string prefix)
    {
        TrieNode *temp = root;
        for (int i = 0; i < prefix.length(); i++)
        {
            if (!temp->containsKey(prefix[i]))
            {
                return false;
            }
            temp = temp->next(prefix[i]);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */