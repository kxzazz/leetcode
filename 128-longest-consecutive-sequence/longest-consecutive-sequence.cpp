class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() < 1) return 0;
        sort(nums.begin(), nums.end());
        int maxSeq =0, n = nums.size(), seq = 0;

        for(int i=1; i < n; i++){
            if(nums[i] == nums[i-1]) continue;
            if(nums[i] - nums[i -1] == 1){
                seq++;
                continue;
            }


            if(seq + 1 > maxSeq) maxSeq = seq +1;
            seq = 0;
        }            
        if(seq + 1 > maxSeq) maxSeq = seq +1 ;

        return maxSeq;

    }
};