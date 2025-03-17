class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() < 1) return 0;
        sort(nums.begin(), nums.end());
        int maxSeq =0, n = nums.size(), seq = 1;

        for(int i=1; i < n; i++){
            if(nums[i] == nums[i-1]) continue;
            if(nums[i] - nums[i -1] == 1){
                seq++;
                continue;
            }


            if(seq > maxSeq) maxSeq = seq;
            seq = 1;
        }            

        return max(seq,maxSeq);

    }
};