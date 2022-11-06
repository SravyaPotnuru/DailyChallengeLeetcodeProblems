//Orderly Queue
/*Basic idea is to get the solution is depends on value of k,if we try to make dry run of the problem then we can understand that for having values of k>1 we can make
the string in the sorted order.If k==0 then we can return back the string. The problem arises when k==1: for this we traverse by picking every 1st element and appends back
and checks wheather we got lexicographically smallest string then we update the  string and returns the new string.*/


class Solution {
public:
    string orderlyQueue(string s, int k) {
       if(k==0) return s;
       else if(k>1){
           sort(s.begin(),s.end());
           return s;
       } 
       else if(k==1){
           string ans=s;
           for(int i=0;i<s.length();i++){
               string reorder=s.substr(i)+s.substr(0,i);
               if(ans.compare(reorder)>0)
               ans=reorder;
           }
           return ans;
       }
       return s;
    }
};
