class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
     int left=0, right =0; // Left: Postition of Non Zero
                           // Right: Place it should go    
     
        for(int i=0; i<nums.size();i++ )
        {
            if(nums[i] != 0)
            {
                left = i;
                swap(nums[left],nums[right]);
                right++;
            }

        }

    }
};