#include "linked_list_operations.h"

int main() {
    struct node *head = init();

    add_element_end(head, 45);
    add_element_end(head, 98);
    add_element_end(head, 3);

    print_list(head);
    return 0;
}
