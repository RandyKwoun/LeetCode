class Solution {
    public int maxIceCream(int[] costs, int coins) {
        Arrays.sort(costs);
        int iAns = 0;
        int iCost = 0;

        for(int i = 0; i < costs.length; i++)
        {
            if(iCost + costs[i] <= coins)
            {
                iAns++;
                iCost += costs[i];
            }
        }

        return iAns;
    }
}
