#include<iostream>;

using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(int data){
			this -> data = data;
			this -> next = NULL;
		} 
		
};

void InsertAtHead(Node* &head, int data){
	
	Node* temp = new Node(data);
	temp -> next = head;
	head = temp;
}

void InsertAtTail(Node* &tail, int data){
	Node* temp = new Node(data);
	tail -> next = temp;
	tail = temp;
}

void InsertAtPosition(Node* head,int position,int data){
	
	Node* temp = head;
	int count = 1;
	while(count < position-1){
		temp = temp-> next;
		count++;
	}
	
	Node* NodetoInsert = new Node(data);
	NodetoInsert -> next = temp -> next;
	temp -> next = NodetoInsert;
	
}
void deletenode(Node* &head,int data){
	Node* temp = head;
	
	while(temp -> next -> data != data){
		temp = temp -> next;
	}
	
	Node* todelete = temp -> next;
	temp -> next = temp -> next -> next;
	
	delete todelete;
}

void printNode(Node* &head){
	Node* temp = head;
	
	while(temp != NULL){
		cout<<temp -> data<<" ";
		temp = temp -> next;
	}
	cout<<endl;
}


Node* reverselinkedlist(Node* head){
	Node* previous = NULL;
	Node* current = head;
	Node* next;
	
	while(current != NULL){
		next = current -> next;
		current -> next = previous;
		
		previous = current;
		current = next;
	}
	
	return previous;
}

int main(){
	Node* node1 = new Node(10);
	//cout<<node1 -> data<<endl;
	//cout<<node1 -> next<<endl;
	Node* head = node1;
	Node* tail = node1;
	//printNode(tail);
	
	InsertAtTail(tail,12);
	//printNode(head);
	
	InsertAtTail(tail, 15);
	//printNode(head);
	
	InsertAtPosition(head,4,22);
	printNode(head);
	
	//deletenode(head,15);
	//printNode(head);
	Node* newhead = reverselinkedlist(head);
	printNode(newhead);
	//printNode(head);
	
}