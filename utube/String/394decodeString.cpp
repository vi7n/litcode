class Solution
{
public:
    string decodeString(string s)
    {
        stack<int> countStack;
        stack<string> stringStack;
        string currentString = "";
        int k = 0;

        for (char c : s)
        {
            if (isdigit(c))
            {
                k = k * 10 + c - '0';
            }
            else if (c == '[')
            {
                countStack.push(k);
                k = 0;
                stringStack.push(currentString);
                currentString = "";
            }
            else if (c == ']')
            {
                string decodedString = currentString;
                currentString = stringStack.top();
                stringStack.pop();
                int loop = countStack.top();
                countStack.pop();
                while (loop--)
                {
                    currentString += decodedString;
                }
            }
            else
            {
                currentString += c;
            }
        }

        return currentString;
    }
};