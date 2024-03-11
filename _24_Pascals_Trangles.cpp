vector<int> generateRow(int row){
    vector<int>ansRow;
    int ans = 1;
    ansRow.push_back(1);
    for(int col =1;col<row;col++){
        ans *=(row - col);
        ans /= (col);
        ansRow.push_back(ans);
    }
    return ansRow;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
for(int i=1;i<=numRows;i++){
 res.push_back(generateRow(i));
} 
return res;
    }