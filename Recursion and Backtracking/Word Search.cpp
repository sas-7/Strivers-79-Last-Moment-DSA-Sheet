class Solution {
public:
    int dr[4]={-1,0,1,0};
    int dc[4]={0,1,0,-1};
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(),m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0] && dfs(board,word,i,j,0,n,m)) return true;
            }
        }
        return false;
    }
    bool dfs(vector<vector<char>>& board, string word,int row,int col,int cnt,int n,int m){
        if(cnt==word.size()) return true;
        if(row<0 || row>=n || col<0 || col>=m || word[cnt]!=board[row][col]) return false;
        char temp=board[row][col];
        board[row][col] ='@';
        for(int i=0;i<4;i++){
            int nrow=row+dr[i];
            int ncol=col+dc[i];
            if(dfs(board,word,nrow,ncol,cnt+1,n,m)) return true;
        }
        board[row][col]=temp;
        return false;
    }
};
