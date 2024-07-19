class Solution {
public:
    int maxOperations(vector<int>& nums, int k) 
    {
      sort(nums.begin(),nums.end());
      int L = 0; 
      int R = nums.size()-1;
      int ops =0;  
        
      for(int i=0; i<nums.size();i++)
      {         
          if(L>=R)
              break;
          
          if(nums[L] + nums[R] == k )
          {

              L++;
              R--;
              ops++;
          }
          
          else if(nums[L] + nums[R] > k )
          {
              R--;
          }
          
         else if(nums[L] + nums[R] < k )
         {
             L++;
         }
          
      }
      return ops;  
    }
};