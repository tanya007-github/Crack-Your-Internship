class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int jump=0;
        for(int i=0;i<nums.size();i++){
           if(jump<i){
                return false;
            }
            int finaldestination=i+nums[i];
            jump=max(jump, finaldestination);
        }
        return true;
    }
};
