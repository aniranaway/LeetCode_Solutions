class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
      bool carry = false;  
      if(digits[digits.size()-1] !=9)
      {
          digits[digits.size()-1]+=1;
          return digits;
      }
        
      carry = true;  
      for(int i = digits.size() - 1; i>=0 ; i--)
      {
        if(digits[i] >= 9 && carry)
            digits[i] = 0;
          
        else if(carry)
        {
            digits[i] += 1;
            carry = false;
        }
      }   
        if(carry)
            digits.insert(digits.begin(),1);     
        return digits;
    }
    
};