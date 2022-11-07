###Maximum 69 Number
/*Approach-1: Convert the num to string using to_string function and the traverse through the string update the 1st 6 to 9 and break the loop and return the num by stoi(string)*/

class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        for(int i=0;i<s.size();i++){
            if(s[i]=='6'){
                s[i]='9';
                break;
            }
        }
        return stoi(s);
    }
};


/*Approach-2:Without converting into string*/

class Solution {
public:
    int maximum69Number (int num) 
    {
        //first encountered '6' from left = last encountered '6' from right
        
        int rightDigCount = -1; //number of digits to right of last encountered '6'
        int digCount = 0; //number of digits to right of any dig at some instance
        int temp = num; 
        //====================================================================
        while(temp > 0) //digits are being recorded from right to left of num
        {
            int dig = temp % 10;
            if (dig == 6) rightDigCount = digCount; //record the rightDigCount when a '6' is encountered
            
            digCount++;
            temp = temp / 10;
        }
        //======================================================================
        if (rightDigCount == -1) return num;
        int ans = num + (3 * pow(10, rightDigCount));
        return ans;
    }
};
