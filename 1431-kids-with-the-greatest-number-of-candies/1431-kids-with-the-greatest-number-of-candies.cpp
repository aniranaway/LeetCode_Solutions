class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        int maxCan = *max_element(candies.begin(),candies.end());
        vector<bool> result;
        
        for(int i{}; i< candies.size(); i++)
            result.push_back((candies[i] + extraCandies)  >= maxCan);
        
        return result;
    }
};