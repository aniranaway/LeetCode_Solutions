class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int L=0,R = height.size()-1;
        int maxArea = 0;
        
        for(int i=0; i<height.size();i++)
        {
            int minHeight = min(height[L],height[R]);
            int area = minHeight * (R-L);
            
            
            if(area > maxArea)
                maxArea = area;

            if(minHeight == height[L])
                    L++;
            else
                    R--;  

        }
        return maxArea;
    }
};