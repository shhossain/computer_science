//1281. Subtract the Product and Sum of Digits of an Integer

//CODE:
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0, mul=1;
        while(n!=0)
        {
            int r;
            r=n%10;
            sum=sum+r;
            mul=mul*r;
            n=n/10;
        }
        int result;
        result = mul - sum;
        return result;
    }
};
