class Solution {
    public int removeDuplicates(int[] nums) {
        ArrayList<Integer> ans = new ArrayList<Integer>();
        for(int i = 0; i < (nums.length - 1); i++)
        {
            if(nums[i] != nums[i + 1])
                ans.add(nums[i]);
        }

        boolean bCheck = true;

        for(int i = 0; i < ans.size(); i++)
        {
            if(nums[nums.length - 1] == ans.get(i))
                bCheck = false;
        }

        if(bCheck)
            ans.add(nums[nums.length - 1]);

        for(int i = 0; i < ans.size(); i++)
        {
            nums[i] = ans.get(i);
        }

        return ans.size();
    }
}
