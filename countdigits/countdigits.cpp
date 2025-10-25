class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int num=n;
        int rem=0;
        int cnt=0;
        while(num>0)
        {
            rem=num%10;
            num=num/10;
            if((n%rem)==0)
            cnt++;
        }
        return cnt;
    }
};
