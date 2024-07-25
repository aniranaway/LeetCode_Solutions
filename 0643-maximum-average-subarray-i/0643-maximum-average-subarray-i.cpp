class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(nums.size()<k) return -1.0;

        int sum{0};
        sum =  accumulate(nums.begin(),nums.begin() + k,sum); 
        int maxi{sum};
        for(int i=1;i<=nums.size()-k;i++)
        {
            sum=sum-nums[i-1];
            sum+=nums[i+k-1];
            maxi=max(maxi,sum);
        }
        double ans=(double)maxi/(double)k;
        return ans;
    }
};