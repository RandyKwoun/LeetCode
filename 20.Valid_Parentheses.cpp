#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk; //To save the parentheses
        bool bAns = false; //To save the answer
        
        //check every characters
        for(int i = 0; i < s.size(); i++)
        {
            //Put the open brakets into the stack
            if((s.at(i) == '(') || (s.at(i) == '{') || (s.at(i) == '['))
            {
                stk.push(s.at(i));
                continue;
            }
            
            //If the first character is close braket, then return false
            if(stk.empty())
                return false;
            
            bAns = checkParentheses(stk.top(), s.at(i)); //Check the matching
            
            //If they aren't matching then return false
            if(!bAns)
                return false;
            
            stk.pop();
        }
        
        //If stk is empty then return true
        if(stk.empty())
            return true;
        
        return false;
    }
    
    //To chck if the parentheses are matching
    bool checkParentheses(char cOpen, char cClose){
        if(cOpen == '(' && cClose == ')')
            return true;
        
        else if(cOpen == '{' && cClose == '}')
            return true;
        
        else if(cOpen == '[' && cClose == ']')
            return true;
        
        return false;
    }
};

//Test cases
int main(void)
{
    string s1 = "()";
    string s2 = "()[]{}";
    string s3 = "(]";
    
    Solution test;
    
    bool bTest;
    
    //Test1 => Expecting to get "true"
    bTest = test.isValid(s1);
    cout << boolalpha << "s1: " << bTest << endl;

    //Test2 => Expecting to get "true"
    bTest = test.isValid(s2);
    cout << boolalpha<< "s2: " << bTest << endl;
    
    //Test3 => Expecting to get "false"
    bTest = test.isValid(s3);
    cout << boolalpha << "s3: " << bTest << endl;
    cout << noboolalpha;
    
    return 0;
}
