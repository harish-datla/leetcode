class Solution {
public:
    int getMostFrequentElement(vector<int>& nums){
        int count = 0;
        int ans = INT_MIN;
        for(int i = 0 ; i < nums.size() ; i++){
            if(count == 0){
                ans = nums[i];
                count=0;
            }
            count+= (ans == nums[i]) ? 1 : -1; 
        }
        return ans;
    }

    int minimumIndex(vector<int>& nums) {
        int frequentElement = getMostFrequentElement(nums);
        int dominantElementFreq = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == frequentElement)dominantElementFreq++;
        }
        int freqTrack = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == frequentElement)freqTrack++;
            int currArraySize = i+1;
            int restArraySize = nums.size() - i - 1;
            if(freqTrack > currArraySize / 2 && (dominantElementFreq - freqTrack  > restArraySize /2)){
                return i;
            }
        }
        return -1;
    }
};