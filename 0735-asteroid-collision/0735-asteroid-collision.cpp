class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) 
    {
        stack<int> astStack{};
        vector<int> result{};
        bool remAst{};

            for (int a : asteroids) 
            {
                if (a > 0) astStack.push(a);

                else 
                {
                    while (!astStack.empty() && astStack.top() > 0 && astStack.top() < -a)  astStack.pop();
                    if (astStack.empty() || astStack.top() < 0)                             astStack.push(a);
                    if (!astStack.empty() && astStack.top() == -a)                          astStack.pop();
                    
                }
            }
             
        
        
        while(!astStack.empty())
        {
            result.push_back(astStack.top());
            astStack.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
