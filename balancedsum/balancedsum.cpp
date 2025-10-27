string balancedSums(vector<int> arr) {
    int lsum=0,rsum=0;
    int n=arr.size();
    long long total=accumulate(arr.begin(),arr.end(),0);
    for(int i=0;i<n;i++)
    {
        rsum=total-lsum-arr[i];
        if(lsum==rsum)
            return "YES";
        lsum+=arr[i];
    }
    return "NO";

}
