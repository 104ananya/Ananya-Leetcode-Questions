//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    
    bool search(vector<vector<char>>& board, string word, int row, int col, int ind, int m, int n, vector<vector<int>>& vis){
        if(ind == word.size()){
            return true;
        }
        if(row< 0 || col < 0 || row == m || col == n){
            return false;
        }
        if(board[row][col] != word[ind]){
            return false;
        }
        if(vis[row][col] == 1){
            return false;
        }

        vis[row][col] = 1;

        bool top = search(board, word, row-1, col, ind + 1, m, n, vis);
        bool right = search(board, word, row, col +1, ind +1, m, n, vis);
        bool bottom = search(board, word, row+1, col, ind+1, m, n, vis);
        bool left = search(board, word, row, col-1, ind+1, m, n, vis);

        vis[row][col] = 0;

        if(top || right || bottom || left){
            return true;
        }
        else{
            return false;
        }
    }
    
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        int m = board.size();
        int n = board[0].size();

        int ind = 0;

        vector<vector<int>> vis( m , vector<int> (n, 0)); 

        for(int i = 0; i< m; i++){
            for(int j = 0; j<n; j++){
                if(board[i][j] == word[ind]){
                    if(search(board, word, i, j, ind, m, n, vis)){
                        return true;
                    }
                }
            }
        }

        return false;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends