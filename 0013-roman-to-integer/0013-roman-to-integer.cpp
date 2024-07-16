class Solution {
public:
    int romanToInt(string s) 
    {
      int final = 0;
      unordered_map<char, int> map =   {{'I', 1}, 
                                        {'V', 5}, 
                                        {'X', 10},
                                        {'L', 50}, 
                                        {'C', 100}, 
                                        {'D', 500},
                                        {'M', 1000}
                                       };
      for(int i=0;i<s.length();i++)
      {
          if(s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X'))
          {
              final += map[s[i+1]] - map['I'];
              i+=1;
          }
          
          else if(s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C'))
          {
              final += map[s[i+1]] - map['X'];
              i+=1;
          }
          
          else if(s[i] == 'C' && (s[i+1] == 'D' || s[i+1] == 'M'))
          {
              final += map[s[i+1]] - map['C'];
              i+=1;
          }
          else
            final += map[s[i]];        
      }
    return final;
    }                                       
};