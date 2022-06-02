class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int rowst=0, rowend=matrix.size()-1, colst=0, colend=matrix[0].size()-1;
        while(rowst<=rowend && colst<=colend){
            for(int i=colst;i<=colend;i++){
                ans.push_back(matrix[rowst][i]);
            }
            rowst++;
            for(int i=rowst;i<=rowend;i++){
                ans.push_back(matrix[i][colend]);
            }
            colend--;
            if(rowend>=rowst){
                for(int i=colend;i>=colst;i--){
                    ans.push_back(matrix[rowend][i]);
                }
            }
            rowend--;
            if(colend>=colst){
                for(int i=rowend;i>=rowst;i--){
                    ans.push_back(matrix[i][colst]);
                }
            }
            colst++;
        }
        return ans;
    }
};
