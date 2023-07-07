class Solution {
    public int minimumSum(int num) {
        int[] arr = new int[4];

        for(int i = 3; i >= 0; i--)
        {
            arr[i] = num / (int) Math.pow(10,i);
            num -= arr[i] * (int) Math.pow(10,i);
        }

        Arrays.sort(arr);

        int iAns = (arr[0] * 10) + (arr[1] * 10) + arr[2] + arr[3];

        return iAns;
    }
}
