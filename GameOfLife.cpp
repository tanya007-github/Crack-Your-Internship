class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<int>x_neighbours={0,0,1,1,1,-1,-1,-1};
        vector<int>y_neighbours={1,-1,1,-1,0,0,1,-1};
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                int livecount=0;
                for(int k=0;k<8;k++){
                    int xneighpos=i+x_neighbours[k];
                    int yneighpos=j+y_neighbours[k];
                    if(xneighpos>=0 && xneighpos<board.size() && yneighpos>=0 && yneighpos<board[0].size() && (abs(board[xneighpos][yneighpos])==1)){
                        livecount++;
                    }
                }
                if((board[i][j]==1) && (livecount<2 || livecount>3)){
                    board[i][j]=-1;
                }
                if(board[i][j]==0 && livecount==3){
                    board[i][j]=2;
                }
            }
        }
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]>=1){
                    board[i][j]=1;
                }
                else{
                     board[i][j]=0;
                }
            }
        }
    }
};
