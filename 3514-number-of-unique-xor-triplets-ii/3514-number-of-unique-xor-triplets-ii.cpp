class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
    unordered_set<int> a;
    unordered_set<int> b;
    for (int i =0; i<nums.size();i++)
    {
        int ans=0;
        for (int j=i;j<nums.size();j++)
        {


            ans = nums[i]^nums[j];
            a.insert(ans);

        }
    }
        for (int i = 0 ; i <nums.size();i++)
        {
            for (int val : a)
            {
                b.insert(val^nums[i]);
            }
        }

    return b.size();
}
};