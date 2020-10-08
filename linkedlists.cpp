#include <string>
#include <iostream>

struct mynode{
	int data;
	mynode* next;
};

void printNodes(mynode* head){
	while(head != NULL){
		std::cout<<head->data<<std::endl;
		head = head->next;
	}
}

mynode* insertNodeAtBeginning(mynode* head, int data){
    mynode* newHead = new mynode();
	newHead->next = head;
	newHead->data = data;
	return newHead;
}

void insertNode(mynode* head, int newData)
{
	while(head->next != NULL)
		head = head->next;
	mynode* newnode = new mynode();
	newnode->data = newData;
	head->next = newnode;
}

void sortList(mynode* head){

}
///////////////////////////////////////////////////////////////////////////
//MAKE THIS FUNCTION, loop through from the head, to the specified index,//
//and perform this   //////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////

/*
			SPECIFIED NODE 
				 V switch with v
	____	    ____	    ____	    ____
	|1 | _____	|2 | _____	|3 | _____	|4 | ___
	|__|     	|i_|     	|__|     	|__|     
change one->next to 2->next
change two->next to 3->next
change three->next to 2
*/
//
void swapNodeWithNextNode(mynode* head, int index){
	for(int i = 0; i != index - 1; i++){
		head = head->next;
	}
	//now we are at one, in the diagram above
	mynode* node2 = new mynode();
	mynode* node3 = new mynode();
	
	node2 = head->next;
	node3 = head->next->next;
	head->next = node3;
	node2->next = node3->next;
	node3->next = node2;
}

mynode* retrieveNode(mynode* head, int index){
	for(int i = 0; i != index; i++){
		head = head->next;
	}
	return head;
}

int main() {
	mynode* myHeadNode = new mynode();
	myHeadNode->data = 2;// node1


	insertNode(myHeadNode, 3); // node2
	insertNode(myHeadNode, 4); // node3
	insertNode(myHeadNode, 5); // node4
	myHeadNode = insertNodeAtBeginning(myHeadNode, 1); //node0
	printNodes(myHeadNode);

	std::cout<<"\n3 AND 4 SWAPPED\n\n";

	swapNodeWithNextNode(myHeadNode, 2); //swap position of node 2 and the next node, 3
	printNodes(myHeadNode);
	return 0;
}
