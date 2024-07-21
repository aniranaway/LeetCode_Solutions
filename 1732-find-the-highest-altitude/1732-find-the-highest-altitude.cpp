class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        
        vector<int> path(gain.size() + 1,0);
        path.push_back(0);
        
        for(int i{1}; i< path.size() - 1;i++)
        {
            
            path[i] = (path[i-1] + gain[i-1]);
        }
        return *max_element(path.begin(),path.end());
    }
};