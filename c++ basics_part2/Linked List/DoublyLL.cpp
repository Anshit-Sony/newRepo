#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int val;
    Node *next;
    Node *prev;
    Node(){
        
    }
    Node(int data){
        val=data;
        next=nullptr;
        prev=nullptr;
    }
};

Node *constructDLL(vector<int> arr);
void printLL(Node *head);
void insertNewNode(Node* &head,int pos,int data);
void deleteNode(Node *&head,int pos);
void reverseLL(Node *&head);

int main(){
    vector<int> arr={1,2,3,4,5};
    Node *head=constructDLL(arr);
    // insertNewNode(head,0,6);
    // insertNewNode(head,2,6);
    // deleteNode(head,2);
    reverseLL(head);
    printLL(head);
    return 0;
}

Node *constructDLL(vector<int> arr){
    int n=arr.size();
    if(n==0) return nullptr;

    Node *nodes[n];
    nodes[0]=new Node(arr[0]);
    Node *head=nodes[0];

    for(int i=1;i<n;i++){
        nodes[i]=new Node(arr[i]);
        nodes[i-1]->next=nodes[i];
        nodes[i]->prev=nodes[i-1];
    }

    return head;
}

void printLL(Node *head){
    Node *temp=head;
    while(temp!=nullptr){
        cout<<temp->val<<"<-->";
        temp=temp->next;
    }
    cout<<"null";
}

void insertNewNode(Node* &head,int pos,int data){
    if(head==nullptr && pos<0) return;
    Node *newNode=new Node(data);
    if(pos==0){
        newNode->next=head;
        if(head!=nullptr){
            head->prev=newNode;
        }
        head=newNode;
        return;
    }

    Node *temp=head;
    for(int i=0;i<pos-1;i++){
        if(temp==nullptr) return;
        temp=temp->next;
    }
    if(temp==nullptr) return;

    if(temp->next==nullptr){
        temp->next=newNode;
        newNode->prev=temp;
    }
    newNode->next=temp->next;
    newNode->prev=temp;
    temp->next->prev=newNode;
    temp->next=newNode;
}


void deleteNode(Node *&head,int pos){
    if(head==nullptr && pos<0) return;
    Node *temp=head;
    if(pos==0){
        head=head->next;
        delete temp;
        return;
    }
    for(int i=0;i<pos;i++){
        if(temp==nullptr) return;
        temp=temp->next;
    }
    if(temp==nullptr) return;
    if(temp->next==nullptr){
        temp->prev->next=nullptr;
        delete temp;
        return;
    }
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    delete temp;
}

void reverseLL(Node *&head){
    if(head==nullptr || head->next==nullptr) return;
    Node *previous=head;
    Node *aft=head->next;
    Node *curr=head->next;
    previous->next=nullptr;
    while(aft!=nullptr){
        aft=aft->next;
        curr->next=previous;
        previous->prev=curr;
        previous=curr;
        curr=aft;
    }
    head=previous;
}