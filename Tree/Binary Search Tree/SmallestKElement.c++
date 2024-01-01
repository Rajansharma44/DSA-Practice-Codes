#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void KSmallestElement(Node* root,int k,vector<int> &result)
{
    if(root == NULL || result.size() >= k)
    {
        return;
    }

    KSmallestElement(root -> left,k,result);
    if(result.size() < k)
    {
        result.push_back(root -> data);
    }
    KSmallestElement(root -> right,k,result);


}
int main()
{

    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);

    int k=3;
    vector<int> result;
     KSmallestElement(root , k,result);
     cout << " K Smallest Elements:" << " ";

    for(int i=0; i<result.size();i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
