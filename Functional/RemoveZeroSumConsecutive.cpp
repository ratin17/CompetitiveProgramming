#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *Next;

    Node(int v){
        val=v;
        Next=NULL;
    }

};

void insertAtHead(Node* &head,int newNodeValue){
    Node *newNode=new Node(newNodeValue);
    if(head==NULL){
        head=newNode;
    }
    else{
        newNode->Next=head;
        head=newNode;
    }

}

void printList(Node* &head){
    if(head==NULL){
        cout<<"No Node in the List"<<endl;
    }
    else{
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val;
            if(temp->Next!=NULL)cout<<" -> ";
            temp=temp->Next;
        }
        cout<<endl;
    }
}

void printCircularList(Node* &head){
    //need to work on some silly things

    int c=31;
    if(head==NULL){
        cout<<"No Node in the List"<<endl;
    }
    else{
        Node* temp=head;
        while(temp!=NULL &&c--){
            cout<<temp->val;
            if(temp->Next!=NULL)cout<<" -> ";
            temp=temp->Next;
        }
        cout<<endl;
    }
}

void insertAfter(Node* &head ,int linkerValue,int newNodeValue){
    Node *newNode=new Node(newNodeValue);
    Node* temp=head;

    while(temp->val!=linkerValue)temp=temp->Next;

    newNode->Next=temp->Next;
    temp->Next=newNode;
}


void deleteFromHead(Node* &head){
    Node *delNode=head;

    if(head==NULL){
        cout<<"No element to delete"<<endl;
        return;
    }

    else{
        head=head->Next;
        delete delNode;
    }
}

Node* RemoveZeroSum(Node* &head){
    Node *ExtraHead=new Node(0);
    ExtraHead->Next=head;
    Node* temp=ExtraHead;

    while(temp!=NULL){
            cout<<temp->val<<endl;
            int sum=0;
            while(head!=NULL){
                sum+=head->val;
                if(sum==0){
                   temp->Next=head->Next;
                }
                head=head->Next;
            }
            temp=temp->Next;
            if(temp!=NULL){
                head=temp->Next;
            }
        }
    return ExtraHead->Next;
}


int main(){
    Node* head=NULL;

    insertAtHead(head,6);
    insertAtHead(head,-6);
    insertAtHead(head,8);
    insertAtHead(head,4);
    insertAtHead(head,-12);
    insertAtHead(head,9);
    insertAtHead(head,8);
    insertAtHead(head,-8);

    printList(head);
    head=RemoveZeroSum(head);
    printList(head);

}
