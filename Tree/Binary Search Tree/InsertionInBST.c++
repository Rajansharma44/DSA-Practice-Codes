#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this -> data=data;
        this->left=NULL;
        this -> right=NULL;
    }
};

Node* BuildTree(Node* &root,int data)
{
    if(root == NULL)
    {
        root= new Node(data);
        return root;
    }
    if(root -> data > data)
    {
        root -> left=BuildTree(root -> left,data);
    }
   else{
    root -> right=BuildTree(root ->right,data);
   }
}

void AddData(Node* root)
{
    int data;
    cin >> data;
    while( data != -1)
    {
        root = BuildTree(root,data);
        cin >> data;
    }
}
int main()
{

    Node* root=NULL;
    cout << "Enter the data" << endl;
    AddData(root);
    return 0;
}
