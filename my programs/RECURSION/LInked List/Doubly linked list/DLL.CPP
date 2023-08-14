#include<iostream>
using namespace std;

class Node{
    public:
      int data;
      Node* prev;
      Node* next;

      Node(){
        this -> data=0;
        this -> prev=NULL;
        this -> next=NULL;
      }
      Node(int data){
        this -> data=data;
        this -> prev=NULL;
        this -> next=NULL;
      }
};

//insertion in doubly linked list
 void inserAtHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
         Node* newNode=new Node(data);
         head=newNode;
         tail=newNode;
         return;
    }
    //step1
     Node* newNode=new Node(data);
     //step2
     newNode -> next= head;
     head -> prev= newNode; //step3
     head=newNode;           //step4
 }

 //inserting node at last
void insertAtTail(Node* &head, Node* &tail,int data){
    //if ll is empty
    if(head==NULL){
        Node* newNode= new Node(data);
        head=NULL;
        tail=NULL;
        return;
    }
    //if ll is not empty
    //step1
    Node* newNode=new Node(data);
    //step2
    tail -> next=newNode;
    //step3
    newNode -> prev=tail;
    //step4
    tail= newNode;

}

void print(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<< temp -> data <<" ";
        temp=temp->next;
    }
}

int getlength(Node* head){
    int len=0;
    Node* temp=head;

    while(temp !=NULL){
        temp= temp -> next;
        len++;
    }
    return len;
}

//insert at inbeetween position

void insertAtPosition(Node* &head,Node* &tail,int position,int data){
     if(head==NULL){
        Node* newNode= new Node(data);
        head=NULL;
        tail=NULL;
        return;
    }

    //ll is lot empty
    if(position==1){
        inserAtHead(head,tail,data);
        return;
    }
    int len=getlength(head);
    if(position >= len){
        insertAtTail(head, tail,data);
        return;
    }
    //insertion in middle
    //step1:find previous and curr
     int i=1;
     Node* prevNode= head;
     while (i<position-1){
          prevNode = prevNode -> next;
          i++;
     }
     Node* curr= prevNode -> next;

     //step2:create a node
     Node* newNode = new Node(data);

     //step3:

     prevNode -> next =newNode;

     newNode -> prev = prevNode ;

     curr -> prev= newNode;

     newNode -> next =curr;

}


int main(){

    Node* first=new Node(23);
    Node* second=new Node(45);
    Node* third=new Node(30);
    Node* head=first;
    Node* tail=second;

    first -> next= second;
    second -> prev=first;

    second ->next= third;
    third -> prev = second;

    print(first);
    cout<<endl;

    inserAtHead(head,tail,102);
    inserAtHead(head,tail,122);
    insertAtTail(head,tail,250);
    insertAtTail(head,tail,260);
    print(head);
   cout<<endl;
    insertAtPosition(head,tail,5,360);
    insertAtPosition(head,tail,1,460);
    insertAtPosition(head,tail,9,460);
     print(head);
     cout<<endl;
     return 0;
}

