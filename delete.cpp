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

int size(Node *head){
    int count=0;
    Node * tmp= head;
    while(tmp!=NULL){
        count++;
        tmp=tmp->next;
    }
    return count;
}
void delete_Node(Node* &head,int pos){
    Node * tmp=head;
    for(int i=1; i<=pos-1; i++){
        tmp=tmp->next;
    }
    Node * deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete deleteNode;

}
void delete_tail(Node *& tail){
    Node* deleteTail= tail;
    tail->prev=tail;
    delete deleteTail;
    tail->next=NULL;
}
void delete_head(Node *&head){
    Node* deleteHead=head;
    head->next=head;
    delete deleteHead;
    head->prev=NULL;
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
    // delete_Node(head, pos);
    // delete_tail(tail);
    delete_head(head);
    print_linked_list(head);
    print_linked_list_reverse(tail);
    
    return 0;
}