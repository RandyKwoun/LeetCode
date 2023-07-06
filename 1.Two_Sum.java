class Solution {
    public int[] twoSum(int[] nums, int target) {
        int sum = 0;
        int[] Ans = new int[2];
        for(int i = 0; i < nums.length; i++)
        {
            for(int j = 0; j < nums.length; j++)
            {
                if(i == j)
                    continue;
                sum = nums[i] + nums[j];
                if(sum == target)
                {
                    Ans[0] = i;
                    Ans[1] = j;
                }
            }
        }
        return Ans;
    }
}
