#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
     int val;
     Node* next;
     Node * prev;
    Node(int val) {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;

    }
};
void print_linked_list(Node * head){
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_linked_list_reverse(Node *tail){
    Node * tmp= tail;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
    
}
void insert_any_position(Node* head, int pos, int val){
    Node * newNode= new Node(val);
    Node * tmp= head;
    for(int i=1; i<=pos-1; i++){
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    newNode->next->prev=newNode;
    newNode->prev=tmp;
}
int size(Node *head){
    int count=0;
    Node * tmp= head;
    while(tmp!=NULL){
        count++;
        tmp=tmp->next;
    }
    return count;
}
int main(){
    Node * head = new Node(10);
    Node * a= new Node(20);
    Node * b= new Node (30);
    Node * c= new Node(40);
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;

    Node * tail= c;
    int pos, val;
    cin>>pos>>val;
    if(pos>=size(head)){
        cout<<"Invalid index"<<endl;
    }
    else{
        insert_any_position(head, pos, val);

    }

    
    print_linked_list(head);
    print_linked_list_reverse(tail);
    
    return 0;
}