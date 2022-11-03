//Set mismatch

class Solution {
public:
    vector<int> findErrorNums(vector<int>& arr) {
        int n = arr.size();
        
        int repeat = 0;
        
        int missing = 0;
        
        // find repeating number
        
        for(int i = 0; i < n; i++)
        {
            if(arr[abs(arr[i]) - 1] < 0)
            {
                repeat = abs(arr[i]);
            }
            else
            {
                arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
            }
        }
        
        // find missing number
        
        for(int i = 0; i < n; i++)
        {
            if(arr[i] > 0)
            {
                missing = i + 1;
            }
        }
        
        return {repeat, missing};
    }
};
