/* Trie Node */
struct TrieNode {
    char data;
    bool isWord;
    unordered_map<char, TrieNode*> children;

    TrieNode( int d ) : data(d), isWord(false) {} 
};

class Trie {
    TrieNode *root;
public:
    Trie() { root = new TrieNode( -1 ); }
    
    void insert( string word ) {
        TrieNode *curr = root;
        for( char c : word ) {
            if( curr->children.find(c) == curr->children.end() )
                curr->children[c] = new TrieNode(c);
            curr = curr->children[c];
        }
        curr->isWord = true;
    }
	
    bool search( string word ) {
        TrieNode *curr = root;
        for( char c : word ) {
            if( curr->children.find(c) == curr->children.end() )
                return false;
            curr = curr->children[c];
        }
        return curr->isWord;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith( string prefix ) {
        TrieNode *curr = root;
        for( char c : prefix ) {
            if( curr->children.find(c) == curr->children.end() )
                return false;
            curr = curr->children[c];
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
