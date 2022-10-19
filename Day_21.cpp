//Count and say

class Solution {
public:
    
    string countAndSay(int n,string prev="1") {
       if(n==1) return prev;
        int i=0,j,len=prev.length();
        string ans="";
        while(i<len){
            j=i;
            while(i<len&&prev[i]==prev[j]) i++;
            ans+=to_string(i-j)+prev[j];
        }
        return countAndSay(n-1,ans);
    }
};
