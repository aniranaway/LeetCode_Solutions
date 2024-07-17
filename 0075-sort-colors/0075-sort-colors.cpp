class Solution 
{
public:
    void sortColors(vector<int>& nums) 
    {
        int n0 = 0,n1 =0;
        for(int i =0; i<nums.size();i++)
        {
            switch(nums[i])
            {
                case 0: n0++;
                        break;
                case 1: n1++;
                        break;              
            }
        }
        
        for(int i=0; i<nums.size();i++)
        {
            if(i < n0)
                nums[i] = 0;
            if(i >=n0 && i< n0+n1)
                nums[i] = 1;
            if(i >=n0+n1)
                nums[i] = 2;
        }
    }
};