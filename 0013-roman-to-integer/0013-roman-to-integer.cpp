class Solution {
public:
    int romanToInt(string s) 
    {
      int final = 0;
        
      for(int i=0;i<s.length();i++)
      {
          switch(s[i])
          {
              case 'I': final += 1;
                        break;
              case 'V': 
                        if(i>0 && s[i-1] == 'I')
                            final += 3;
                        else
                            final += 5;
                        break;
                  
              case 'X': if(i>0 && s[i-1] == 'I')
                            final += 8;
                        else
                            final += 10;
                        break;
                  
              case 'L': if(i>0 && s[i-1] == 'X')
                            final += 30;
                        else
                            final += 50;
                        break;
                  
              case 'C': if(i>0 && s[i-1] == 'X')
                            final += 80;
                        else
                            final += 100;
                        break;
                  
              case 'D': if(i>0 && s[i-1] == 'C')
                            final += 300;
                        else
                            final += 500;
                        break;
                  
              case 'M': if(i>0 && s[i-1] == 'C')
                            final += 800;
                        else
                            final += 1000;
                        break;
          }
          
      }
        return final;
    }
    
};