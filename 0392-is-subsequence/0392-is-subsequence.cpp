class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        int sqPtr  = 0;  
        for(int i=0;i < t.size();i++)
        {
            if(t[i] == s[sqPtr])
            {
                sqPtr++;
                if(sqPtr > s.size())
                    break;
            }
        }
        return sqPtr == s.size();
    }
};