// https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        
        int sum=0;
        for(auto i : array)
        sum+=i;
        
        int count =n*(n+1)/2;
        
        return count-sum;
        
    }
};
