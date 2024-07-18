class Solution {
public:
    string reverseVowels(string s) 
    {
        set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        stack<char> rev;
        
        for(int i=0;i<s.length();i++)
        {
            if(vowels.find(s[i]) != vowels.end())
                rev.push(s[i]);
        }
        
        for(int i=0;i<s.length();i++)
        {
           if(vowels.find(s[i]) != vowels.end())
           {
                s[i] = rev.top();
                rev.pop();
           }
        }
        return s;
    }
};