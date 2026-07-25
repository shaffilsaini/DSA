class Solution {
public:
    int maxProduct(int n) {
        int ans=0;
        vector<int> arr;
        while(n>0){
            int digit= n%10;
            arr.push_back(digit);
            n=n/10;
        }
        sort(arr.begin(),arr.end());
        return arr[arr.size()-1]*arr[arr.size()-2];
    }
};