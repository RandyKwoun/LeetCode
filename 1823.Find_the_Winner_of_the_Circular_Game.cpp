class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> queArr;

        for(int i = 1; i <= n; i++)
            queArr.push(i);

        if(k == 1)
            return n;

        while(queArr.size() != 1)
        {
            for(int i = 0; i < k - 1; i++)
            {
                queArr.push(queArr.front());
                queArr.pop();
            }

            queArr.pop();
        }

        return queArr.front();
    }
};
