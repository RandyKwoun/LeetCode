class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string strAns = ""; //Save an answer here

        //When the length of word1 is longer than word2.
        if(word1.length() >= word2.length())
        {
            int i = 0; //A variable for saving an index

            //merge both words
            for(i = 0; i < word2.length(); i++)
            {
                strAns.push_back(word1[i]);
                strAns.push_back(word2[i]);
            }

            //add rest of the characters
            for(int j = i; j < word1.length(); j++)
                strAns.push_back(word1[j]);
        }

        //When the length of word2 is longer than word1.
        else
        {
            int i = 0; //A variable for saving an index
            
            //merge both words
            for(i = 0; i < word1.length(); i++)
            {
                strAns.push_back(word1[i]);
                strAns.push_back(word2[i]);
            }

            //add rest of the characters
            for(int j = i; j < word2.length(); j++)
                strAns.push_back(word2[j]);
        }

        return strAns; //return the answer
    }
};
