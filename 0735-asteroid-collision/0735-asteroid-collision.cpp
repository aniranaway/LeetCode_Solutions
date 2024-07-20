class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) 
    {
        stack<int> astStack{};
        
        bool remAst{};

            for (int asteroid : asteroids) 
            {
                if (asteroid > 0) astStack.push(asteroid);

                else 
                {
                    while (!astStack.empty() && astStack.top() > 0 && astStack.top() <-asteroid)   astStack.pop();
                    if (astStack.empty() || astStack.top() < 0)                                     astStack.push(asteroid);
                    if (!astStack.empty() && astStack.top() == -asteroid)                           astStack.pop();
                    
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
