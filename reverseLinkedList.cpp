#include <iostream>
 
struct Node{
    Node* next;
    int value;
};
 
void printList(Node* headNode){
    while(headNode != NULL){
        std::cout << headNode->value << std::endl;
        headNode = headNode->next;
    }
}
void appendNode(Node* head, int value){
    while (head->next != NULL){
        head = head->next;
    }
    Node* newNode = new Node();
    newNode->value = value;
    head->next = newNode;
}


//HOLY SHITE THIS ONE IS HARD! thanks Mun!
Node* reverseList(Node* oldHead){
    Node* slow = oldHead;
    Node* temp = NULL;
    Node* fast = NULL;
 
    while(slow != NULL){
        fast = slow->next;
        slow->next = temp;
        temp = slow;
        slow = fast;
    }
 
    oldHead = temp;
    return oldHead;
}
 
int main(){
    Node* myHead = new Node();
 
    myHead->value = 1;
    appendNode(myHead, 2);
    appendNode(myHead, 3);
    appendNode(myHead, 4);
    appendNode(myHead, 5);
    printList(myHead);
 
    std::cout << " ------ NEW LIST!!! ------\n";
 
    Node* myNewHead = reverseList(myHead);
    printList(myNewHead);
}