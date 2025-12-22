Node* current = head;
    while (current != NULL) {
        Node* prev = current;
        Node* temp = current->next;
        while (temp != NULL) {
            if (current->val == temp->val) {
                // Remove the node
                prev->next = temp->next;
                delete temp;
                temp = prev->next;  // move temp forward
            } else {
                prev = temp;
                temp = temp->next;
            }
        }
        current = current->next;
    }