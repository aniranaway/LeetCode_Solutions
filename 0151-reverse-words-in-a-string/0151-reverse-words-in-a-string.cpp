class Solution {
public:
    string reverseWords(string s) 
    {
       int curr = 0, left =-1,right =-1; 
       reverse(s.begin(),s.end());
       for(int i=0;i<=s.length();i++)
       {
           if(s[i] != ' ' && left == -1)
               left = i;
           
           if(right == -1 && left != -1 && (s[i] == ' '|| s[i] == '\0'))
               right = i;
           
           if(left != -1 && right != -1)
           {
               reverse(s.begin() + left, s.begin() + right);
               left  = -1;
               right = -1;
           }
       }
       
        int i=0;
        
        
       while(i<s.size() && s[i] == ' ')
       {
           i++;
       }
    
       while(i < s.length())
       {
           if(s[i] != ' ')
           {
               s[curr] =  s[i];
               i++;
               curr++;
           }
           
           else
           {
               s[curr] = s[i];
               i++;
               curr++;
               while(i<s.size() && s[i] == ' ')
                   {
                       i++;
                   }
           }  
       }
                   
       if(s[curr-1] == ' ')
           curr--;       
       s.resize(curr);
    return s;
    }
};














