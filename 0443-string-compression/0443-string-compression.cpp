class Solution {
public:
    int compress(vector<char>& chars) 
    {
        int     compLen{};
        int     curr{};
        char    curr_char = chars[0];
        chars.push_back('\0');
        
        
        for(auto &c : chars)
        {      
           if(c == curr_char)   compLen++;

           else if(c != curr_char)
            {
                chars[curr] = curr_char;
                curr++;
                curr_char = c;
               
               if((compLen == 1 && c == '\0')) break;  
                   
               else if((compLen > 1 && compLen <= 9 ))            
               {
                 chars[curr] = compLen + '0';
                 curr++;   
               }
               
               else if(compLen > 9)
               {
                 int div = 1000;
                 while(compLen % div == compLen)   div/= 10;                
                 div *= 10; 
                   
                 while(div != 1)
                 {
                     chars[curr] = (compLen % div)/(div/10) + '0';
                     div/= 10;
                     curr++;
                 }
                     
               }
          
               compLen = 1;
               
            }

        }
        
        chars.resize(curr);
        
        return chars.size();
    }
};