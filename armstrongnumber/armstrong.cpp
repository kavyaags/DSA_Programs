class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int num=n;
        int rem=0;
        int sum=0;
        while(num>0){
            rem=num%10;
            num=num/10;
            sum+=rem*rem*rem;
            
        }
        if(sum==n)
        return true;
        else false;
    }
};
