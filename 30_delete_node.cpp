#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

void deleteNode(LinkedListNode<int> * node) {
    LinkedListNode<int>*node2=node->next;
    while(node2!=NULL)
    {
        node->data=node2->data;
        if (node2->next == NULL) {
          node->next = NULL;
          return;
        }
        node = node2;
        node2 = node2->next;
    }
}
