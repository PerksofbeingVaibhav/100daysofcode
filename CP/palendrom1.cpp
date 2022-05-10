class Solution {
public:
    int reverse(long long int x)
{
    int long long rem=0,rev=0;
    while(x!=0)
    {
        rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    }
    return rev;
}
    bool isPalindrome(long long int x) 
    {
        if(x<0)
        {
            return false;
        }
        if(reverse(x)==x)
        {
            return true;
        }
        return false;       
    }
};
