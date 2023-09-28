class Solution {
    public int minimumOperations(int[] nums) {
        
        //If the length of "nums" is 1
        if(nums.length == 1)
        {
            if(nums[0] == 0)
                return 0;

            else
                return 1;
        }

        //Make new ArrayList Ans to save every each number.
        ArrayList<Integer> Ans = new ArrayList<Integer>();

        //sort "nums" to use more easily.
        Arrays.sort(nums);

        //Set "j" to Integer.MAX_VALUE for checking the array "nums" has other numbers not 0.
        int j = Integer.MAX_VALUE;

        //Checking the array "nums" has other numbers not 0. If there is other number existing then, make j to save the place.
        for(int i = 0; i < nums.length; i++)
        {
            if(nums[i] != 0)
            {
                j = i;
                break;
            }
        }

        //If the array "nums" has only 0. Then return 0.
        if(j == Integer.MAX_VALUE)
            return 0;

        //Make first place of "Ans" first number of "nums" 
        Ans.add(nums[j]);

        //Comparing the numbers which are in the array "nums". If the numbers are different then save into the array list "Ans".
        for(int i = j + 1; i < nums.length; i++)
        {
            if(nums[i - 1] != nums[i])
                Ans.add(nums[i]);
        }
        
        //Size of "Ans" is the answer. 
        return Ans.size();
    }
}
