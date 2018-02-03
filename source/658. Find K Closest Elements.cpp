class Solution1 {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        //选择>=x的index是因为这个index最后不包括在subarrl里面，相当与迭代器end();
        int index = lower_bound(arr.begin(), arr.end(),x)-arr.begin();
        int i = index -1, j= index;
        //以index为中心向绝对值较小的反向拓展至k个。
        while(k--)
            (i<0||(j<arr.size()&& abs(arr[i]-x)>abs(arr[j]-x)))?j++:i--;
        return vector<int>(arr.begin()+i+1,arr.begin()+j);
    }
};

//二分法查找最好的index,比index+k更近。
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int lo =0, hi = arr.size()-k;
        while(lo<hi){
            int mid = (lo+hi)/2;
            if(x-arr[mid]>arr[mid+k]-x)
                lo = mid+1;
            else
                hi=mid;
        }

        return vector<int>(arr.begin()+lo,arr.begin()+lo+k);
    }
};
