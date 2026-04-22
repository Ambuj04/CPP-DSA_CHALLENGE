//OPTIMAL SOLUTION
class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        string part;
        vector<string> s; // using stack<string> s is chaos
        while (getline(ss, part, '/')){ //TC -> O(n)
            // iteration over string and split with delimiter and store in part
            if (part == "" || part == ".") {
                // present directory
                continue;
            } else if (part == "..") {
                // parent directory (we need to remove previouse directory)
                if (!s.empty()) {
                    // if not empty then remove
                    s.pop_back(); // as stack.pop();
                }
            } else {
                s.push_back(part); // as stack.push();
            }
        }
        //prepare from stack
        string res = "";
        for(string part:s){
           res += '/' + part;
        }
        if(res == ""){
            return "/";
        }else{
            return res;
        }
    }
};
//TC -> O(n) 
//TC -> O(n) 