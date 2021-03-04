class Solution {
public:
    string strWithout3a3b(int A, int B) {
         bool flag = (A >= B);
        string out = "";
        while(true)
        {
            if(A == 0 && B == 0)break;
            if(A == B)
            {
                
                while(true)
                {
                    if(A == 0 && B == 0)break;
                    if(flag && A >=1)
                    {
                        out+="a";
                        A-=1;
                    }
                    else if(!flag && B>= 1)
                    {
                        out+="b";
                        B-=1;
                    }
                    flag = !flag;
                }
            }
            else if(A > B)
            {
                if(flag && A >= 2)
                {
                    out+="aa";
                    A-=2;
                }
                else if(!flag && B >= 1)
                {
                    out+="b";
                    B-=1;
                }
                else if(flag && A >= 1)
                {
                    out+="a";
                    A-=1;
                }
               
            }
            else if(B > A)
            {
               
                if(flag && A >= 1)
                {
                    out+="a";
                    A-=1;
                }
                else if(!flag && B >= 2)
                {
                    out+="bb";
                    B-=2;
                }
               else if(!flag && B>=1)
                {
                    out+="b";
                    B-=1;
                }
            }
            flag = !flag;
        }
        
        
        
        return out;
    }
};