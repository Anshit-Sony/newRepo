#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int val;
    Node *next;
    Node(){
        
    }
    Node(int data){
        val=data;
        next=nullptr;
    }
};

Node* constructLL(vector<int> arr){
    int n=arr.size();
    Node *nodes[n];
    if(n==0) return nullptr;
    nodes[0]=new Node(arr[0]);
    Node *head=nodes[0];
    for(int i=1;i<n;i++){
        nodes[i]=new Node(arr[i]);
        nodes[i-1]->next=nodes[i];
    }
    return head;
}

void printLL(Node *head){
    Node *temp=head;
    while(temp!=nullptr){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"null";
    delete temp;
}

void insertNewNode(Node* &head,int pos,int data){
    if(head==nullptr && pos!=0) return;
    Node *newNode=new Node(data);
    if(pos==-1){
        newNode->next=head;
        head=newNode;
        return;
    }
    Node *temp=head;
    for(int i=0;i<pos;i++){
        if(temp==nullptr) return;
        temp=temp->next;
    }
    if(temp==nullptr) return;
    if(temp->next==nullptr){
        temp->next=newNode;
        return;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}

void deleteNode(Node *&head,int pos){
    if(head==nullptr) return;
    Node *current=head;
    if(pos==0){
        head=head->next;
        delete current;
        return;
    }
    Node *prev=nullptr;
    for(int i=0;i<pos;i++){
        if(current==nullptr) return;
        prev=current;
        current=current->next;
    }
    if(current==nullptr) return;
    if(current->next==nullptr){
        prev->next=nullptr;
        delete current;
        return;
    }
    prev->next=current->next;
    delete current;
}

void reverseLL(Node *&head){
    if(head==nullptr || head->next==nullptr) return;
    Node *curr=head;
    Node *after=head;
    Node *prev=nullptr;
    while(after!=nullptr){
        after=curr->next;
        curr->next=prev;
        prev=curr;
        curr=after;
    }
    head=prev;
}

int main(){
    vector<int> arr={1,2,3,4,5};
    Node *head=constructLL(arr);
    // insertNewNode(head,-1,6);
    // insertNewNode(head,2,6);
    // deleteNode(head,0);
    // deleteNode(head,3);
    reverseLL(head);
    printLL(head);
    return 0;
}