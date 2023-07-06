class Solution {
    public int singleNumber(int[] nums) {
        Arrays.sort(nums);

        if(nums.length == 1)
            return nums[0];

        int iNum = nums[1];

        if(nums[0] != nums[1])
            return nums[0];

        int i = 1;
        while(true)
        {
            if(iNum != nums[i - 1])
                return nums[i - 1];

            if(i + 3 >= nums.length)
                break;
            i += 3;
            iNum = nums[i];
        }
        return nums[nums.length - 1];
    }
}
