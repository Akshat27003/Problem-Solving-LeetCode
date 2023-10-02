class Solution {
public:

    int lowerBound(vector<int>& arr,int target)
    {
        int s=0;
        int e=arr.size()-1;
        int mid=s+(e-s)/2;
        int ans=e;
        while(s<=e)
        {
            if(arr[mid]>=target)
            {
                ans=mid;
                e=mid-1;
            }
            else if(target>arr[mid])
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }

        return ans;
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        //Binary Search approach: TC: O(k + log n)
        int high=lowerBound(arr,x);
        int low=high-1;

        while(k--)
        {
            if(low<0)
            {
                high++;
            }

            else if(high>=arr.size())
            {
                low--;
            }

            else if((x-arr[low])>(arr[high]-x))
            {
                high++;
            }
            else
            {
                low--;
            }
        }

        return vector<int> (arr.begin()+low+1,arr.begin()+high);
    }
};
