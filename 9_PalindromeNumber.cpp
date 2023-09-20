class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        long reverseNum=0; //long data to fit the reverse number in range.
        if(x<0)
        {
            return false;
        }
        while(temp!=0)
        {
            int lastDigit=temp%10;
            reverseNum=(reverseNum*10)+lastDigit;
            temp=temp/10;
        }
        if(reverseNum==x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
