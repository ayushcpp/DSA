/* Structure of Tree Node
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
};*/

class Solution {
  public:
    vector<int> preOrder(Node* root) {
        vector<int>ans;
        // code here
        if(root==NULL){
            return ans;
        }
        ans.push_back(root->data);
        vector<int>left=preOrder(root->left);
        vector<int>right=preOrder(root->right);
        
        ans.insert(ans.end(),left.begin(),left.end());
        ans.insert(ans.end(),right.begin(),right.end());
        return ans;
    }
};