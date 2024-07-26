class Solution {
public:
    int maxVowels(string s, int k) 
    {
        int noVow{};
        int maxVow{};
        for(int i{};i<k;i++)
            if(s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u')
                noVow++;
        maxVow = noVow;
        
        for(int i{1}; i <= s.size() - k; i++ )
        {
            noVow -= (s[i-1] == 'a'||s[i-1] == 'e'||s[i-1] == 'i'||s[i-1] == 'o'||s[i-1] == 'u')? 1:0;
            noVow += (s[i+k-1] == 'a'||s[i+k-1] == 'e'||s[i+k-1] == 'i'||s[i+k-1] == 'o'||s[i+k-1] == 'u')? 1:0;
            maxVow = max(noVow,maxVow);
        }
        return maxVow;
    }
};