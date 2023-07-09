class Solution {
    public int arrayPairSum(int[] nums) {
        Arrays.sort(nums);
        int iAns = 0;

        for(int i = 0; i < nums.length; i += 2)
            iAns += nums[i];

        return iAns;
    }
}
