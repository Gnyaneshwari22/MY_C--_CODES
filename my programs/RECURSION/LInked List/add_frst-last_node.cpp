#include<iostream>
using namespace std;

class Node{
    public:
     int data;
     Node* next;

     Node(){
        this -> data=0;
        this->next=NULL;
     }
     Node(int data){
        this -> data= data;
        this -> next=NULL;
     }
};

 void insertAtTail(Node* &head, Node* &tail,int data){
      //check if LL is empty  
        if(head==NULL){
            Node* newNode=new Node(data);
            head=newNode;
            tail=newNode;
           
        }
       else{
               
            //step1
            Node* newNode=new Node(data);
            //step2
           
            tail -> next=newNode;
            //step3
            tail=newNode;
       }
     
}

void insertAtHead(Node* &head, Node* &tail,int data){
      //check if LL is empty  
        if(head==NULL){
            Node* newNode=new Node(data);
            head=newNode;
            tail=newNode;
           
        }
       else{
               
            //step1
            Node* newNode=new Node(data);
            //step2
           
            newNode -> next=head ;
            //step3
            head=newNode;
       }
     
}

void print(Node* head){

    Node* temp=head;
    while(temp != NULL){
        cout<< temp->data<< " ";
        temp= temp -> next;
    }  
}

int findLength(Node* &head ) {
        int len = 0;
        Node* temp = head;
        while(temp != NULL) {
                temp = temp->next;
                len++;
        }
        return len;
}

void insertAtPosition(int data, int position, Node* &head, Node* &tail) {
        if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
                return;
        }
        //step1: find the position: prev & curr;

        if(position == 0) {
                insertAtHead(head, tail , data);
                return;
        }
       
        int len = findLength(head);
        
        if(position >= len) {
                insertAtTail(head, tail, data);
                return;
        }
        //ste1:find prev and curr
        int i = 1;
        Node* prev = head;
        while(i < position) {
                prev= prev -> next;
                i++;
        }
        Node* curr = prev -> next;

        //step2;
        Node* newNode = new Node(data);

        //step3:
        newNode -> next = curr;

        //step4:
        prev -> next = newNode;
}


int main(){

    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,20);
     insertAtHead(head,tail,30);
     insertAtHead(head,tail,40);
     insertAtHead(head,tail,50);
     insertAtTail(head,tail,110);
     insertAtTail(head,tail,120);
     insertAtPosition(150,3,head,tail);

     


    print(head);
    return 0;
}
