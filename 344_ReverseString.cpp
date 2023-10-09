class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0;
        int endIndex=s.size()-1;
        while(start<endIndex)
        {
            swap(s[start],s[endIndex]);
            start++;
            endIndex--;
        }
    }
};
