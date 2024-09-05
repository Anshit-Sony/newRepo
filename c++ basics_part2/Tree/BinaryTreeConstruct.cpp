#include<bits/stdc++.h>

using namespace std;

struct treeNode{
    int data;
    struct treeNode *left,*right;
    treeNode(int x){
        data=x;
        left=nullptr,right=nullptr;
    }
}typedef node;

node* buildTreeFromArray(int arr[], int n) {
    if (n == 0) return nullptr;  // If array is empty, return null

    // Create the root node
    node* root = new node(arr[0]);

    // Queue to store tree nodes in level order
    queue<node*> q;
    q.push(root);

    int i = 1;  // Start with the second element in the array

    while (i < n) {
        // Get the current node from the front of the queue
        node* current = q.front();
        q.pop();

        // Insert the left child
        if (i < n) {
            current->left = new node(arr[i]);
            q.push(current->left);
            i++;
        }

        // Insert the right child
        if (i < n) {
            current->right = new node(arr[i]);
            q.push(current->right);
            i++;
        }
    }

    return root;
}

node *constructTree(){
    int value;
    cout<<"Enter value (-1 for no node): ";
    cin>>value;

    if(value==-1) return nullptr;

    node *newNode=new node(value);

    cout<<"Enter the left child "<<value<<endl;
    newNode->left=constructTree();

    cout<<"enter the right child "<<value<<endl;
    newNode->right=constructTree();

    return newNode;
}

int main(){
    // node *root=constructTree();
    // cout<<root->right->data;

    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    node *root=buildTreeFromArray(arr,n);
    cout<<root->left->right->data;
    return 0;
}