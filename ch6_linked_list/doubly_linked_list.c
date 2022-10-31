#include <stdio.h>

typedef struct Node{
    int value;
    struct Node *next;
    struct Node *prev;
} Node;

void insert_node(int index);


int main(void){
    
    // input values
    printf("\nLet's start input numbers!\n");
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

    for(i=0; i < number_of_nodes; i++){
        printf("%d", node_values[i]);
    }


    // build doubly linked list
    /**
     * ?? 이걸 nodes해서 배열로 해도 되나? 그럼 개수가 제한된다는 단점이 있는데
    */
    struct Node nodes[400];
    for(i = 0; i < number_of_nodes; i++){
        nodes[i].value = node_values[i]; // insert values

        if(i != 0){                     // set prev pointers
            nodes[i].prev = &nodes[i-1];
        }else{
            nodes[i].prev = NULL;
        }

        if (i != number_of_nodes){      // set next pointers
            nodes[i].next = &nodes[i+1];
        }else{
            nodes[i].next = NULL;
        }
        
    }

    for(i=0; i < number_of_nodes; i++){
        printf("value: %d\n", nodes[i].value);
        printf("prev: %d\n", nodes[i].prev);
        printf("pres: %d\n", &nodes[i]);
        printf("next: %d\n\n", nodes[i].next);
    }


    Node* start = &(nodes[0]);  //start pointer
    












    return 0;
}