//Brute Force
class Solution {
public:
    string simplifyPath(string path) {
        stack<string> s;
        int start = 0;
        int end = path.find('/');
        while (end != string::npos) {
            string part = path.substr(start, end - start);
            // condition for check
            if (part == "." || part == "") {
                // present directory
                start = end + 1;
                end = path.find('/', start);
            } else if (part == "..") {
                // parent directory
                if (!s.empty())
                    s.pop();
                start = end + 1;
                end = path.find('/', start);
            } else {
                s.push(part);
                start = end + 1;
                end = path.find('/', start);
            }
        }
        // process last
        string last = path.substr(start);
        if (last == "." || last == "") {
            // don't push anything
        } else if (last == "..") {
            if (!s.empty())
                s.pop();
        } else {
            s.push(last);
        }
        vector<string> temp;
        while (!s.empty()) {
            temp.push_back(s.top());
            s.pop();
        }
        reverse(temp.begin(), temp.end());
        string res = "";
        for (auto dir : temp) {
            res += "/" + dir;
        }
        if (res == "")
            return "/";
        return res;
    }
};
//TC = O(n)
//SC = O(n)  