#include<iostream>
using namespace std;

struct treeNode{
    int data;
    struct treeNode *left,*right;
    treeNode(){
        data=0;
        left=nullptr,right=nullptr;
    }
}typedef node;


int main(){
    node *root=new node();
    node *a=new node();
    node *b=new node();
    node *c=new node();
    node *d=new node();
    root->data=1;
    root->left=a;
    root->right=b;

    a->data=2;
    b->data=3;
    b->left=c;
    b->right=d;
    c->data=4;
    d->data=5;

    cout<<root->right->right->data;
    return 0;
}