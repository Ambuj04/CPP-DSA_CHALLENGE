class Solution
{
public:
    string simplifyPath(string path)
    {
        // thought process behind stack is we push and remove element from last
        stack<char> s;
        s.push('path[0]');
        for (int i = 1; i < path.length(); i++)
        {
            if (s.top() == '.')
            {
                if (path[i] == '/')
                {
                    // present directory
                    s.pop();
                    continue;
                }
                if (path[i] == '.')
                {
                    int count = 1;
                    // already in stack
                    while (path[i] == '.')
                    {
                        s.push('.');
                        count++;
                        i++;
                    }
                    // we got path[i] = '/'
                    if (count == 2)
                    {
                        // previous directory
                        while(){}
//-------------------STUCK HERE----------------------------
                    }
                }
            }
        }
    }
};