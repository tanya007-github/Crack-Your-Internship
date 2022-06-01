class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int left=j+1;
                int right=n-1;
                int target1=target-(nums[i]+nums[j]);
                while(left<right){
                    if((nums[left]+nums[right])<target1){
                        left++;
                    }
                    else if((nums[left]+nums[right])>target1){
                        right--;
                    }
                    else{
                        vector<int> temp(4,0);
                        temp[0]=nums[i];
                        temp[1]=nums[j];
                        temp[2]=nums[left];
                        temp[3]=nums[right];
                        ans.push_back(temp);
                        while(left<right && temp[2]==nums[left]){
                            left++;
                        }
                        while(left<right && temp[3]==nums[right]){
                            right--;
                        }
                    }
                }
                while(j+1<n && nums[j]==nums[j+1]){
                    j++;
                }
            }
            while(i+1<n && nums[i]==nums[i+1]){
                i++;
            }
        }
        return ans;
    }
};
