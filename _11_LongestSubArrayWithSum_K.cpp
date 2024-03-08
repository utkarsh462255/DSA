int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n = a.size();
    int i = 0; int j = 0;
    int l = 0, maxlen = 0;
    long long s = 0;
    while(j<n)
    {
        s+=a[j];
        j++;
        while(s>k)
        {
            s-=a[i];
            i++;
        }
        if(s==k)
        {
            l = j - i;
            maxlen = max(l , maxlen);
        }
    }
    return maxlen;
}