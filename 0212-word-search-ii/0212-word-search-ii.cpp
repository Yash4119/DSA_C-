struct TrieNode {
    TrieNode* children[26] = {};
    string* word;
    void addWord(string& word) {
        TrieNode* cur = this;
        for (char c : word) {
            c -= 'a';
            if (cur->children[c] == nullptr) cur->children[c] = new TrieNode();
            cur = cur->children[c];
        }
        cur->word = &word;
    }
};

class Solution {
public:
    int m, n;
    int DIR[5] = {0, 1, 0, -1, 0};
    vector<string> ans;
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        m = board.size(); n = board[0].size();
        TrieNode trieNode;
        for (string& word : words) trieNode.addWord(word);
        
        for (int r = 0; r < m; ++r)
            for (int c = 0; c < n; ++c)
                dfs(board, r, c, &trieNode);
        return ans;
    }
    void dfs(vector<vector<char>>& board, int r, int c, TrieNode* cur) {
        if (r < 0 || r == m || c < 0 || c == n || board[r][c] == '#' || cur->children[board[r][c]-'a'] == nullptr) return;
        char orgChar = board[r][c];
        cur = cur->children[orgChar - 'a'];
        if (cur->word != nullptr) {
            ans.push_back(*cur->word);
            cur->word = nullptr; // Avoid duplication!
        }
        board[r][c] = '#'; // mark as visited!
        for (int i = 0; i < 4; ++i) dfs(board, r + DIR[i], c + DIR[i+1], cur);
        board[r][c] = orgChar; // restore org state
    }
};

// BRUTE FORCE

/*

class Solution {
public:
    
    bool dfs(vector<vector<int>>&vis,vector<vector<char>>&board ,vector<string>&words, int i, int j, int k,int ind){
        
        
        if(ind>=words[k].size() || i<0 || j<0 || i>=board.size() || j>=board[0].size() || vis[i][j]==1 || board[i][j] != words[k][ind])
        {
            return false;
        }
        if(ind==words[k].size()-1 && board[i][j] == words[k][ind]){
                return true;
        }
        bool l,r,u,d;
        
        vis[i][j] = 1;
        
        d = dfs(vis,board,words,i+1,j,k,ind+1);
        u = dfs(vis,board,words,i-1,j,k,ind+1);
        l = dfs(vis,board,words,i,j-1,k,ind+1);
        r = dfs(vis,board,words,i,j+1,k,ind+1);
        
        vis[i][j]=0;
        
        return l||u||d||r;
    }
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        set<string>ans;
        
        vector<vector<int>>vis(board.size(),vector<int>(board[0].size(),0));
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                for(int k=0;k<words.size();k++){
                    if(board[i][j] == words[k][0]){
                        
                        if(dfs(vis,board,words,i,j,k,0)){
                            ans.insert(words[k]);
                        }
                    }
                }
            }
        }
        
        vector<string>res(ans.begin(),ans.end());
        
        return res;
    }
};

*/