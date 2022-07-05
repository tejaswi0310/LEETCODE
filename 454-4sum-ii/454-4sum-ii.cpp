class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
//         unordered_map<int,int>mp;
        
// //         for(int i=0;i<nums3.size();i++){
// //             for(int j=0;j<nums4.size();j++){
// //                 mp[nums3[i]+nums4[j]]++;
// //             }
// //         }
//         for(int k : nums3)
//             for(int l : nums4)
//                 mp[k + l]++;
        
//         int count=0;
//         for(int i:nums1){
//             for(int j:nums4){
//                 count+=mp.count(-(i+j));
//             }
//         }
//         return count;
        map<int,int> mp;
        for(int k : nums3)
            for(int l : nums4)
                mp[k + l]++;
        int count = 0;
        for(int i : nums1)
            for(int j : nums2)
                        count += mp[-(i + j)];
        return count;
    }
};