// https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1

/*
| 1 | 2 | 3 | 4
| 5 | 6 | 7 | 8
| 9 |10 |11 | 12
| 13|14 |15 | 16

op = 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

*/

// SOLUTION 1 :

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int top = 0;
        int btm = r -1;
        int left = 0;
        int right = c -1;
        
        vector <int > v;
        
        
        while(top<=btm && left<=right){
            
            for(int  i=left;i<=right;i++)  v.push_back(matrix[top][i]);
            
            top++;
            
            for(int i=top;i<=btm;i++)  v.push_back(matrix[i][right]);
            
            right--;
            
            if(top<=btm){
                for(int i=right;i>=left;i--)  v.push_back(matrix[btm][i]);
                
                btm--;
            }
            
            if(left<=right){
                for(int i=btm;i>=top;i--)  v.push_back(matrix[i][left]);
                
                left++;
            }
   
        }
        return v;
    }
};


//SOLUTION 2: 

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int top =0;
        int bottom = r;
        int left = 0;
        int right =c;
        vector <int > v;
        
        while(top<bottom and left<right){
            
            for(int i=left;i<right;i++)  v.push_back(matrix[top][i]);
            
            top++;
            
            for(int i=top;i<bottom;i++)  v.push_back(matrix[i][right-1]);
            
            right--;
            
            if(top<bottom){
                
                for(int i=right-1;i>=left;i--)  v.push_back(matrix[bottom-1][i]);
                bottom--;
            }
            
            if(left<right){
                
                for(int i=bottom-1;i>=top;i--)  v.push_back(matrix[i][left]);
                left++;
            }
            
            
        }
        return v;
    }
};


