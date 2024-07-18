class Solution {
public:
    string removeStars(string s) 
    {
        stack<char> starStack;
        string res;
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
        res.resize(starStack.size());
        while(!starStack.empty())
        {
            res[i] = starStack.top();
            starStack.pop();
            i++;
        }
        reverse(res.begin(),res.end());
     return res;   
    }
};