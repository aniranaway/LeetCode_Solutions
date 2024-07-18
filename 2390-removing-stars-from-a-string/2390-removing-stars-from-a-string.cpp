class Solution {
public:
    string removeStars(string s) 
    {
        stack<char> starStack;
        for(int i=0; i<s.size(); i++)
        {
            
            if(s[i] != '*')
                starStack.push(s[i]);
            else
            {
                starStack.pop();
            }
        }
        
        int i=0;
        s.resize(starStack.size());
        while(!starStack.empty())
        {
            s[i] = starStack.top();
            starStack.pop();
            i++;
        }
        reverse(s.begin(),s.end());
     return s;   
    }
};