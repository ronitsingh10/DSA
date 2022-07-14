#include "bits/stdc++.h"
using namespace std;

class Node {
private:
    char data;
    vector<node*> children;
    bool isTerminal;
public:
    Node(char data): data(data), children(26, NULL), isTerminal(false) {};
};

class Trie {
private:
    Node* root;
    // Trie(): root


};

int main() {
    return 0;
}
