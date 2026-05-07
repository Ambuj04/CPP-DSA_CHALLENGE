/*
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
  public:
    vector<int> leftView(Node *root) {
       queue<Node*>q;
       vector<int>ans;
       if(root == nullptr) return ans;
       q.push(root);
       while(!q.empty()){
           int s = q.size();
           bool first = true;;
           while(s--){
               Node* top = q.front();
               q.pop();
               if(first) ans.push_back(top->data);
               first = false;
               if(top->left){
                   q.push(top->left);
               }
                if(top->right){
               q.push(top->right);
                }
           }
       }
       return ans;
    }
};
//TC->O(N)
//SC->O(W) W = width of tree