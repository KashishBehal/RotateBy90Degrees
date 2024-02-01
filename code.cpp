class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        
       for(int i=0;i<n;i++){
           int j=0;int k=n-1;
           while(j<=k){
           swap(matrix[i][j] , matrix[i][k]);
           j++;
           k--;
       }}
       for(int i=0;i<n;i++){
           for(int j=i;j<n;j++){
               swap(matrix[i][j] , matrix[j][i]);
           }
       }
    } 
};
