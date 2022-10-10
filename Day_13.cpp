//Break Palindrome

//The problem is to break the given palindrome in the lexicographically(come first in dictionary) smallest way.
//->so basic logic is to make  the first non 'a' character element as 'a'.
//->if palindrome is "aaaaa" then make last character as 'b'=="aaaab".

class Solution {
public:
    string breakPalindrome(string palindrome) {
       if(palindrome.length()==1)
       return "";
        int i=0,j=palindrome.length()-1;
        while(i<j){
            if(palindrome[i]!='a'){
                palindrome[i]='a';
                return palindrome;
            }
            i++;
            j--;
        }
        palindrome[palindrome.length()-1]='b';
        return palindrome;
    }
};

