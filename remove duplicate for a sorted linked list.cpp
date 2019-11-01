
// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {


        SinglyLinkedListNode *nowNode = head;
        if(nowNode==nullptr or nowNode->next==nullptr) return head;
        while(nowNode->next!=nullptr){
            if(nowNode->data == nowNode->next->data){
                 nowNode->next = nowNode->next->next;
            }
            else{
                nowNode = nowNode->next;
            }
        }
        return head;

}

