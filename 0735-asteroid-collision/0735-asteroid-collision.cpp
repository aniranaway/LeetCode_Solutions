class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) 
    {
        stack<int> astStack{};
        
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
             
        vector<int> result;
        
        while(!astStack.empty())
        {
            result.insert(result.begin(),astStack.top());
            astStack.pop();
        }
        return result;
    }
};
