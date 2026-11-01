/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    vector<int> inOrder(Node* root) {
        // code here
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        vector<int>left=inOrder(root->left);
        ans.insert(ans.end(), left.begin(), left.end());
        ans.push_back(root->data);
        vector<int>right=inOrder(root->right);
        ans.insert(ans.end(), right.begin(), right.end());
        return ans;
    }
};