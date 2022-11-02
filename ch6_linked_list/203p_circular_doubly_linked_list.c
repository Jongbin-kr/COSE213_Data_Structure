#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int value;
    struct Node *next;
    struct Node *prev;
} Node;


void insert_after_value(Node* start);
void display_list(Node* start);
void delete_last_node(Node* start);

int main(void){
    
    // input values
    printf("\n---Let's start inputting values for circular doubly linked list!---");
    printf("\nHow much numbers do you want to input?: \n");
    int number_of_nodes;
    scanf("%d", &number_of_nodes);
    printf("\nOK. Then, let's start input %d itmes sequentially. \n", number_of_nodes);
    
    int i = 0;
    int node_values[400];
    for(i=0; i < number_of_nodes; i++){
        printf("\ninput %dth node's value: \n", i);
        scanf("%d", &node_values[i]);
    }

    // build circular doubly linked list
    Node* start = NULL;
    Node *new_node, *ptr;
    for(i = 0; i < number_of_nodes; i++){
        if (start == NULL){
            new_node = (Node *)malloc(sizeof(Node));
            start = new_node;
            new_node->value = node_values[i];
            new_node->prev = start;
            new_node->next = start;
        }else{
            ptr = start;
            new_node = (Node *)malloc(sizeof(Node));
            new_node->value = node_values[i];
            while(ptr->next != start) ptr = ptr->next;
            ptr->next = new_node;
            new_node->prev = ptr;
            new_node->next = start;
            start->prev = new_node;
        }
    }
    display_list(start);  // display originally built list


    insert_after_value(start); // insert new node after specific value
    display_list(start);    // display list after insertion


    delete_last_node(start); // delete last node 
    display_list(start);    // display list after deleting last node


    system("pause"); // '계속하려면 아무 키나 누르십시오...' 메시지를 띄우기 위함
    return 0;
}


void display_list(Node* start){
    printf("\n---The current list is as follows.---");
    Node* ptr = start;
    while(ptr->next != start){
        printf("\nvalue: %d\n", ptr->value);
        printf("prev: %d\n", ptr->prev);
        printf("pres: %d\n", ptr);
        printf("next: %d\n", ptr->next);
        ptr = ptr->next;
    }

    printf("\nvalue: %d\n", ptr->value);
    printf("prev: %d\n", ptr->prev);
    printf("pres: %d\n", ptr);
    printf("next: %d\n", ptr->next);
}


void insert_after_value(Node* start){
    Node* new_node, *ptr;
    int index_value, new_value;
    printf("\n---Let's Start inserting node!---");
    printf("\nWhat value do you want to input? :\n");
    scanf("%d", &new_value);
    printf("\nAfter which value do you want to input new node?: \n");
    scanf("%d", &index_value);

    // create new node and input value
    new_node = (Node *)malloc(sizeof(Node));
    new_node->value = new_value;
    
    // search indexed node
    ptr = start;
    while (ptr->value != index_value) ptr = ptr->next;
    
    // connect new_node with indexed node
    new_node->prev = ptr;
    new_node->next = ptr->next;
    ptr->next->prev = new_node;
    ptr->next = new_node;
}


void delete_last_node(Node* start){
    Node* ptr = start, *preptr;
    printf("\n---Let's Start deleting LAST node!---");

    while(ptr->next != start){
        preptr = ptr;
        ptr = ptr->next; // move ptr until finding original last node which next points start node.
        printf("*");
    }
    preptr->next = start;
    start->prev = preptr;

    free(ptr);

}
