vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int largest=a[0];
    int secondLargest=INT_MIN;
    int smallest=a[0];
    int secondSmallest=INT_MAX;

    for(int i=1;i<n;i++){
        if(a[i]>largest){
            secondLargest=largest;
            largest=a[i];
        }
        else{
            if(a[i]>secondLargest && a[i]!=largest){
                secondLargest=a[i];
            }
        } 
        if(a[i]<smallest){
            secondSmallest=smallest;
            smallest=a[i];
        }
        else{
            if(a[i]<secondSmallest && a[i]!=smallest){
                secondSmallest=a[i];
            }
        }
    }
    vector<int>ar;
    ar.push_back(secondLargest);
    ar.push_back(secondSmallest);
    return ar;
}
