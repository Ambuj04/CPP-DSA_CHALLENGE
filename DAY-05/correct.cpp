/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
  public:
    vector<int> levelOrder(Node *root) {
        vector<int> res; // store answer
        if(root == nullptr) return res;
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            int levelSize = q.size();//tells how many nodes available for process in current level
            while (levelSize--) {
                Node* t = q.front();
                res.push_back(t->data);
                q.pop();
                if (t->left != nullptr) {
                    q.push(t->left);
                }
                if (t->right != nullptr) {
                    q.push(t->right);
                }
            }
        }
        return res;
    }
};