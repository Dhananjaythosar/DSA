class Solution {
public:
    int romanToInt(string s) {
        int I=1,V=5,X=10,L=50,C=100,D=500,M=1000;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='M'){
                ans+=M;
            }
            else if(s[i]=='D'){
                ans+=D;
            }
            else if(s[i]=='L'){
                ans+=L;
            }
            else if(s[i]=='V'){
                ans+=V;
            }
            else if(s[i]=='C'){
                if(s[i+1]=='D' || s[i+1]=='M'){
                    ans-=C;
                }else{
                    ans+=C;
                }
            }
            else if(s[i]=='X'){
                if(s[i+1]=='L' || s[i+1]=='C'){
                    ans-=X;
                }else{
                    ans+=X;
                }
            }
            else if(s[i]=='I'){
                if(s[i+1]=='V' || s[i+1]=='X'){
                    ans-=I;
                }else{
                    ans+=I;
                }
            }
        }
        return ans;
    }
};