class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged;
        int strPtr1 = 0;
        int strPtr2 = 0;

        for(int i=0; i<word1.size() + word2.size();i++)
        {
            if(i%2 == 0 && strPtr1 < word1.size())
            {
                merged.push_back(word1[strPtr1]) ;
                strPtr1++;
            }
            else if(i%2 != 0 && strPtr2 < word2.size()) 
            {
                merged.push_back(word2[strPtr2]) ;
                strPtr2++;
            }
        }
        while(strPtr1 != word1.size())
        {
 
            merged.push_back(word1[strPtr1]);
            strPtr1++; 
        }
        
        while(strPtr2 != word2.size())
        {
            merged.push_back(word2[strPtr2]);
            strPtr2++;        
        }
        return merged;
    }
};