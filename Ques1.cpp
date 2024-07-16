// Global Trend Programming Profile Assessment Questions
// Question 1
#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node *next;
// constructor
Node(int data){
    this->data=data;
    this->next=NULL;
}
// destructor
~Node(){
    int value=this->data;
    if(this->next!=NULL){
        delete next;
        this->next=NULL;
    }
    cout<<"\nMemory free for\n"<<value<<endl;
} 
};

 void insertAtBeg(Node *&head,int data){
        cout<<"data = "<<data<<endl;
        Node *newNode=new Node(data);
        newNode->next=head;
        head=newNode;
}
void insertAtLast(Node *&head,int data){
    Node *newNode=new Node(data);
    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void deleteNode(int postn,Node *&head){
    // cout<<"hello";
    if(postn==1){
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        // delete an middle or last Node
        Node *curr=head;
        Node *prev;
        int cnt=1;
        while(cnt<postn){
              prev=curr;
              curr=curr->next;
              cnt++;
              prev->next=curr->next;
              curr->next=NULL;
              delete curr;
        }
    }
}
Node *reverseLL(Node *head) {
	    if(head==NULL||head->next==NULL){
			return head;
		}
		Node *prev=NULL;
		Node *curr=head;
		Node *forward=NULL;
		while(curr!=NULL){
			forward=curr->next;
			curr->next=prev;
			prev=curr;
			curr=forward;
		}
		return prev;
}
void traversal(Node *&head){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"  ";
            temp=temp->next;
    }
}
int main()
{   
    int n,e,a;
    cout<<"Linked List ------------------------------"<<endl;
    cout<<"Initialize the Linked List\n";
    cout<<"Enter 1st element"<<endl;
    int x;
    cin>>x;
    Node *node1=new Node(x);
    Node *head=node1;
    char ch='y';
    while(ch=='y'){
        cout<<"Select operations\n";
        cout<<" 1. Insert at beg\n 2. Insert at last"<<endl;
        cout<<" 3. Delete nth Node\n 4. Reverse\n 5. Display\n";
        cin>>n;
        switch(n){
            case 1:
                cout<<"enter element to be entered\n";
                cin>>e;
                insertAtBeg(head,e);
                
                break;
            case 2:
                cout<<"enter element to be entered\n";
                cin>>e; 
                insertAtLast(head,e);
                break;
            case 3:
                cout<<"enter index of node to delete";
                deleteNode(1,head);
                break;
            case 4:
                {
                    cout<<"Linked List reversed\n";
                    Node *prev=reverseLL(head);
                    traversal(prev);
                    head=prev;
                    cout<<endl;
                    break;
                }
            case 5:
                cout<<"Traversing\n";
                traversal(head);
                cout<<endl;
                break;
        }
        cout<<"if want to continue enter \'y\' else \'n\'"<<endl;
        cin>>ch;
        if(ch=='n')
          cout<<"Operation exits"<<endl;
    }

    return 0;
}
