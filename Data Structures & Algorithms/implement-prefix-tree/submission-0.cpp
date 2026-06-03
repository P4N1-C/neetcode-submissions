class PrefixTree {
public:
    PrefixTree* children[26];
    bool isLeaf;
    PrefixTree() {
        for(int i = 0; i < 26; i++) children[i] = NULL;
        isLeaf = false;
    }
    
    void insert(string word) {
        PrefixTree* curr = this;
        for(char& c : word) {
            int idx = c - 'a';
            if(curr->children[idx] == NULL) {
                curr->children[idx] = new PrefixTree();
            }
            curr = curr->children[idx];
        }
        curr->isLeaf = true;
    }
    
    bool search(string word) {
        PrefixTree* curr = this;
        for(char&c : word) {
            int idx = c - 'a';
            if(curr->children[idx] == NULL) return false;
            curr = curr->children[idx];
        }
        return curr->isLeaf;
    }
    
    bool startsWith(string prefix) {
        PrefixTree* curr = this;
        for(char&c : prefix) {
            int idx = c - 'a';
            if(curr->children[idx] == NULL) return false;
            curr = curr->children[idx];
        }
        return true;
    }
};
