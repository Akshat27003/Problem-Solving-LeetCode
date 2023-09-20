class Solution {
public:
    int findComplement(int num) {
        int m=num;
        int mask=0;
        while(m!=0)
        {
            mask=(mask<<1)|1;//making target bits of mask as 1 (the bits which will be used to match with n) and other bits as 0 by default.
            m=m>>1;
        }
        return (~num)&mask; //avoiding creating ans variable for lesser memory.
    }
};
