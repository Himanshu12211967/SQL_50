class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int st = 0;
        int end = arr.size()-1;
        int peak;

        while(st <= end){

            int mid = st+(end-st)/2;
            if(arr[mid]>arr[mid+-1] && arr[mid]>arr[mid+1]) return mid;
            else if(arr[mid] < arr[mid+1]) st = mid+1;
            else end = mid;
        }

        return peak;
    }
};