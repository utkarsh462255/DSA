int longestSuccessiveElements(vector<int>&a) {
    unordered_map<int,int>eleMap;
    int len=a.size();
    for(int i=0; i<len; i++)
    {
      eleMap[a[i]]++;
    }
    int longestSucc=0;
    int currSucc=1;
    for(int i=0; i<len; i++)
    {
      if(eleMap[a[i]-1]) continue; // it is not start of sequence
      else
      {
        while(eleMap[a[i]+currSucc])
        {
          currSucc++;
        }
        longestSucc=max(currSucc,longestSucc);
        currSucc=1;
      }
    }
    return longestSucc;
}