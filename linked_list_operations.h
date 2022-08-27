#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

struct node* init(){
    struct node *head = malloc(sizeof(struct node));
    head -> data = NULL;
    head -> link = NULL;

    return head;
}

void add_element_end(struct node *head, int data) {
    if (head -> data == NULL && head -> link == NULL) {
        head -> data = data;
        return;
    }

    struct node *ptr = head;
    while (ptr -> link != NULL) {
        ptr = ptr -> link;
    }

    struct node *new_node = malloc(sizeof(struct node));
    new_node -> data = data;
    new_node -> link = NULL;

    ptr -> link = new_node;
}

void print_list(struct node *head) {
    struct node *ptr = head;
    int count = 1;
    while (ptr != NULL) {
        printf("Address: %d\tId: %d\tData: %d\tLink: %d\n", ptr, count, ptr -> data, ptr -> link);
        ptr = ptr -> link;
        count++;
    }
}

struct node* reverse_list(struct node *head) {
    struct node *ptr = NULL;
    struct node *ptr2 = NULL;

    while (head != NULL) {
        ptr2 = head -> link;
        head -> link = ptr;
        ptr = head;
        head = ptr2;
    }

    head = ptr;
    return head;
}
