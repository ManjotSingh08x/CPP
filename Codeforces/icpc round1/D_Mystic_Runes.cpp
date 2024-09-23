#include <bits/stdc++.h>
using namespace std;

struct TrieNode {

    // pointer array for child nodes of each node
    TrieNode* child[10];
    int count = 0;
    // Used for indicating ending of string
    bool wordEnd;

    TrieNode()
    {
        // constructor
        // initialize the wordEnd variable with false
        // initialize every index of childNode array with
        // NULL
        wordEnd = false;
        for (int i = 0; i < 9; i++) {
            child[i] = NULL;
        }
    }
};

// Method to insert a key into the Trie
void insertKey(TrieNode* root, const string& key, map<char, char> dict) {
  
    // Initialize the curr pointer with the root node
    TrieNode* curr = root;

    // Iterate across the length of the string
    for (char c : key) {
        char coded = dict[c];
        curr->count++;
        // Check if the node exists for the 
        // current character in the Trie
        if (curr->child[coded - '0'] == nullptr) {
          
            // If node for current character does 
            // not exist then make a new node
            TrieNode* newNode = new TrieNode();
          
            // Keep the reference for the newly
            // created node
            curr->child[coded - '0'] = newNode;
        }
      
        // Move the curr pointer to the
        // newly created node
        curr = curr->child[coded - '0'];
    }
    curr->count++;

    // Mark the end of the word
    curr->wordEnd = true;
}
void traverse(TrieNode* current, int&count){
    if (current->wordEnd) count++;
    else{
        for(TrieNode* ptr : current->child){
            if (ptr != nullptr) traverse(ptr, count);
        }
    }
}
int countElement(TrieNode* root, const string& key){
    TrieNode* curr = root;
    for(char c: key){
        if(curr->child[c - '0'] == nullptr){
            return 0;
        }
        curr = curr->child[c - '0'];
    }
    return curr->count;
}


void solve(){
    map<char, char> dict;
    dict['a'] = '2'; dict['b'] = '2'; dict['c'] = '2';
    dict['d'] = '3'; dict['e'] = '3'; dict['f'] = '3';
    dict['g'] = '4'; dict['h'] = '4'; dict['i'] = '4';
    dict['j'] = '5'; dict['k'] = '5'; dict['l'] = '5';
    dict['m'] = '6'; dict['n'] = '6'; dict['o'] = '6';
    dict['p'] = '7'; dict['q'] = '7'; dict['r'] = '7'; dict['s'] = '7';
    dict['t'] = '8'; dict['u'] = '8'; dict['v'] = '8';
    dict['w'] = '9'; dict['x'] = '9'; dict['y'] = '9'; dict['z'] = '9';

    int n, m; cin >> n >> m;
    //vector<string> names;
    TrieNode* names = new TrieNode();
    for(int i=0; i < n; i++){
        string name; cin >> name;
       insertKey(names, name, dict);
    }

    //     names.push_back(name);
    // }
    vector<string> sequences;
    for(int i = 0; i < m; i++){
        string sequence; cin >> sequence;
        sequences.push_back(sequence);
    }
    for(string sequence: sequences){
        cout << countElement(names, sequence) << endl;
    }
//     for(int k = 0; k < m; k++){
//         int counter = 0;
//         for(string name: names){
//             bool flag = true;
//             for(int j = 0; j < sequences[k].size(); j++){
//                 if(sequences[k][j] != dict[name[j]]){
//                     flag = false;
//                     break;
//                 }
//             }
//             if(flag == true) counter++;
//         }
//         cout << counter << '\n';
//     }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}