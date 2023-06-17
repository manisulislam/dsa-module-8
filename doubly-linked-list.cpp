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
}
void print_linked_list_reverse(Node *tail){
    Node * tmp= tail;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
}
int main(){
    Node * head = new Node(10);
    Node * a= new Node(20);
    Node * b= new Node (30);
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    Node * tail= b;

    print_linked_list(head);
    cout<<endl;
    print_linked_list_reverse(tail);
    
    return 0;
}