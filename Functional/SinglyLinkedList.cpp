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

void makeCircular(Node* &head){
    if(head==NULL){
        cout<<"No Element found to make circular linked list"<<endl;
    }
    else{
    Node* temp=head;
    while(temp->Next!=NULL)temp=temp->Next;
    temp->Next=head;
    }
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

int main(){
    Node* head=NULL;
    insertAtHead(head,7);
    insertAfter(head,7,4);
    insertAfter(head,4,19);
    printList(head);
    deleteFromHead(head);
    printList(head);
    insertAfter(head,4,5);
    insertAtHead(head,74);
    printList(head);

    makeCircular(head);
    printCircularList(head);

}
