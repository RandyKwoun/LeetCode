class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int iMax = 0; //Save the maximum number of candies

        // Find the maximum number of candies
        for(int i = 0; i < candies.size(); i++)
        {
            if(candies[i] > iMax)
                iMax = candies[i];
        }

        vector<bool> Ans; //Save the answer here

        //Comparing every kids
        for(int i = 0; i < candies.size(); i++)
        {
            //If the kid has greatest number of candies after the kid get the extra candies, then save true
            if(candies[i] + extraCandies >= iMax)
                Ans.push_back(true);

            //If the kid has not greatest number of candies after the kid get the extra candies, then save false
            else
                Ans.push_back(false);
        }

        //Return the answer
        return Ans;
    }
};
