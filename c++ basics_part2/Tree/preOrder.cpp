#include<iostream>
#include<vector>

using namespace std;

struct treeNode{
    int data;
    struct treeNode *left,*right;
    treeNode(int x){
        data=x;
        left=nullptr,right=nullptr;
    }
}typedef node;

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
    node *root=constructTree();
    cout<<root->right->data;
    return 0;
}