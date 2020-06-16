class Solution {
public:
   const string validIPv6Chars = "0123456789abcdefABCDEF";  
    bool check(string s,int c)
    {
        if(c==3)
        {
            if(s[0]=='0' && s.length()>1)
                return false;
            
            for(int i  = 0 ; i<s.length();i++)
            {
                if(!isdigit(s[i]))
                    return false;
            }
            
            stringstream geek(s); 
            int x = 0; 
            geek >> x; 
            if(x>255 || x<0||s.length()==0)
                return false;
            return true;
        }

        if(s.length()==0|| s.length()>4)
            return false;
        
          for(int i  = 0 ; i<s.length();i++)
            {
                 if (validIPv6Chars.find(s[i]) == string::npos)
    	    	    return false;
            }
        
        return true;
        
    }
    
    string validIPAddress(string IP) {
    int i  = 0 ;
    string s = "";
    int count = 0;
for(int i = 0 ; IP[i]!='\0';i++)
{
    if(IP[i]=='.'||IP[i]==':')
    {
        count++;
    }
    
}

if(count!=7 && count !=3)
{
                return "Neither" ;
}
    
        for(int i = 0 ; IP[i]!='\0';i++)
        {
            if(IP[i]=='.'||IP[i]==':')
            {   
                if(!check(s,count))
                {
                                    return "Neither" ;
                
                }
                s = "";
           
            }
            else
            s+=IP[i];
        }
        if(!check(s,count))
                {
                                    return "Neither" ;
                
                }

            if(count==3)
               return "IPv4";
            else if(count==7)
                return "IPv6";
            else
                return "Neither" ;
            
   return 0; }
};