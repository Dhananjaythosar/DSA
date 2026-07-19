class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int n=s.size(),l=0,len=0;
    if(n==0) return 0;
    unordered_map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]=-1;
    }
    for(int i=0;i<n;i++){
        if(mp[s[i]]!=-1){
            l=max(mp[s[i]]+1,l);
        }
        mp[s[i]]=i;
        len=max(len,i-l+1);
    }
    return len;
    }
};