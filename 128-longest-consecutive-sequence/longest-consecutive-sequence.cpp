class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n < 1) return 0;

        sort(nums.begin(), nums.end());

        int maxSeq = 0, seq =1;

        for(int i=1; i < n; i++){
            if(nums[i] == nums[i-1]) continue;
            if(nums[i] - nums[i-1] == 1){
                seq++;
                continue;
            }

            if(seq > maxSeq) maxSeq = seq;
            seq = 1;
        }

        return max(maxSeq, seq);

    }
};