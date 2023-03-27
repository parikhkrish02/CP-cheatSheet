// Usage of trie
// Browser History, spelling checker, auto-complete

#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    TrieNode *arr[26];
    bool end;

    bool containsKey(char c)
    {
        return (arr[c - 'a'] != nullptr);
    }

    void insert(char c)
    {
        TrieNode *newNode = new TrieNode();
        arr[c - 'a'] = newNode;
    }

    TrieNode *next(char c)
    {
        return arr[c - 'a'];
    }

    void setEnd()
    {
        this->end = true;
    }

    bool isEnd()
    {
        return this->end;
    }
};

class WordDictionary
{
private:
    TrieNode *root;

public:
    WordDictionary()
    {
        root = new TrieNode();
    }

    void addWord(string word)
    {
        TrieNode *n = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (!n->containsKey(word[i]))
            {
                n->insert(word[i]);
            }
            n = n->next(word[i]);
        }
        n->setEnd();
    }

    bool searchHelper(string word, int index, TrieNode *head)
    {
        if (index == word.length())
        {
            return head->isEnd();
        }

        if (word[index] == '.')
        {
            for (int i = 0; i < 26; i++)
            {
                if (head->containsKey('a' + i) && searchHelper(word, index + 1, head->next('a' + i)))
                {
                    return true;
                }
            }
            return false;
        }
        else
        {
            if (!head->containsKey(word[index]))
            {
                return false;
            }
            return searchHelper(word, index + 1, head->next(word[index]));
        }
    }

    bool search(string word)
    {
        return searchHelper(word, 0, root);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */