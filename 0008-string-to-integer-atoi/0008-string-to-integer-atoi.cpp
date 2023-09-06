class Solution {
public:
   int myAtoi(string s) {
        int p=1;
        long num=0;
        bool symbol=false;
        for(char c:s){
            if((int) c>=48 && (int) c<=57)
            {
                num=num*10+((int) c - 48);
                symbol=true;
            }
            else if((c=='+' || c=='-') && !symbol)
            {
                if(c=='-')
                    p=-1;
                symbol=true;
                continue;
                
            }
            else if(c==' ' && !symbol)
                continue;
            else
                break;
            if(num*p>=INT32_MAX)
                return INT32_MAX;
            if(num*p<=INT32_MIN)
                return INT32_MIN;
        }
        return p*num;
   }
};