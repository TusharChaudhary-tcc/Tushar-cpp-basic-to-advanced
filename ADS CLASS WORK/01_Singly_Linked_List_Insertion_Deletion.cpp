#include <bits/stdc++.h>
using namespace std;

// 14 August 2026

struct node{
    int data;
    struct node *next;
};

node *GetNode(){
    node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}

node *insertBeg(node *head, int d){
    node *p;
    p=GetNode();
    p->data=d;
    p->next=head;
    head=p;
    return head;
}
node *insertAtEnd(node *head, int d){
    node *Q=GetNode();
    Q->data=d;
    Q->next=NULL;
    if(head==NULL){
        head=Q;
    }
    else{
        node *p=head;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=Q;
    }
    return head;
}
node *InsAft(node *head, node *temp, int d){
    node *q=temp->next;
    node *p=temp;
    node *r=GetNode();
    r->data=d;
    p->next=r;
    r->next=q;
    return head;
}
node *OrderedInsert(node *head, int d){
    node *p,*q;
    p=head;
    q=NULL;
    while(p!=NULL && d>(p->data)){
        q=p;
        p=p->next;
    }
    if(q!=NULL){
        head=InsAft(head, q, d);
    }
    else{
        head=insertBeg(head, d);
    }

    return head;
}
void traverse(node *head){
    node *p=head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}

node *delBeg(node *head){
    node *p=head;
    head=head->next;
    int x=p->data;
    cout<<"Deleted Node  data is: "<<x<<endl;
    free(p);
    return head;
}

int main(){
    node *head;
    head=NULL;
    head=insertBeg(head, 1);
    head=insertBeg(head, 2);
    head=insertBeg(head, 3);
    head=insertBeg(head, 4);
    head=insertBeg(head, 5);
    cout<<"After insert at beginning : ";
    traverse(head);
    cout<<endl;

    cout<<"After insert at end : ";
    head=insertAtEnd(head, 100);
    traverse(head);
    cout<<endl<<endl<<endl;

    head=delBeg(head);
    cout<<"After deletion at beginning : ";
    traverse(head);
    cout<<endl;


    node *temp;
    temp=head;
    while(temp->data!=3){
        temp=temp->next;
    }

    head=InsAft(head, temp, 400);
    cout<<"Insert after position : ";
    traverse(head);
    

}