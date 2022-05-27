class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(), a.end());
        int i=0, j=m-1, mindiff=INT_MAX;
        while(j<n){
            int diff=a[j]-a[i];
            mindiff=min(mindiff, diff);
            j++;
            i++;
        }
        return mindiff;
    }   
};
