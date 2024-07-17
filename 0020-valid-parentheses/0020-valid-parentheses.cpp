class Solution {
public:
    bool isValid(string s) 
    {
     unordered_map<char,char> map = {
                                     {')','('},
                                     {']','['},
                                     {'}','{'}
                                    };
     stack<char> parCheck;
        
     for(int i=0; i<s.length();i++)
     {
         
        if(parCheck.empty() || s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            parCheck.push(s[i]);
        }
         
        else if(parCheck.top() == map[s[i]])
        {
            parCheck.pop();
        }
        
        else
         {
             parCheck.push(s[i]);
         }
       
     }
        
        
     return parCheck.empty();
    }
};