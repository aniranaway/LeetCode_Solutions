class Solution {
public:
    bool isPalindrome(int x) 
    {                               
      int temp = x;  
      long rev = 0;
      uint8_t digit;  
      while(temp > 0)  
      {
        digit = temp%10;
        rev = rev*10 + digit;
        temp/=10;
      }
        return (rev == x);
    }
};