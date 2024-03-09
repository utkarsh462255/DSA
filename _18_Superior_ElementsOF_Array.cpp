vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int> ans;
    int maxi=INT_MIN;
    for(int i=a.size()-1; i>=0; i--){
        if(a[i]>maxi) ans.push_back(a[i]);
        maxi=max(maxi,a[i]);
    }
    return ans;
    
}