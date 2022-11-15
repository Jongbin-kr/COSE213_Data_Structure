#include <stdio.h>
#define MAX 8  // 순환 큐를 구현하기 위한 배열의 크기 == 순환큐의 크기

int que[MAX];
int front = -1;
int rear = -1;

void display(void);
void insert(void);
void delete(void);

int main(void){


    int option;
    do{
        printf("\n\n\n\n======= CIRCULAR QUEUE OPERATION ======\n");
        printf("\nType 1 to DISPLAY, 2 to INSERT, 3 to DELETE, 4 to EXIT.\n");
        printf("Type option: ");
        scanf("%d", &option);
        getchar();
        
        switch (option)
        {
        case 1:
            display();
            break;

        case 2:
            insert();
            break;
        
        case 3:
            delete();
            break;

        }
    }while(option != 4);
    

    return 0;
}



void display(void){
    printf("\n-------------DISPLAY------------\n");
    int front_pos = front, rear_pos = rear;  // display시에는 원본 front/rear를 건드리지 않고자, 새로운 변수에 front/rear값을 복사해둔다.
    int i;
    printf("\n");
    if (front == -1){   // 완전 초기상태.
        printf("\n***The Queue is EMPTY!!!***\n");
        printf("\nfront is %d, rear is %d\n", front, rear);
        printf("\n----------------------------------\n\n\n");
        return;
    }
    else{
        if(front_pos <= rear_pos){   // 순환이 일어나지 않은 일반적인 상태에서는 그냥 front-pos 증가시키며 display
            while(front_pos <= rear_pos){
                printf("\n* char is %c", que[front_pos]);
                front_pos++;
                }
        }else{
            while(front_pos <= MAX-1){   // 순환이 일어난 경우, 곧, rear - front - MAX인 경우, 일단 front-pos를 끝까지 증가시키며 값 보여주고
                printf("\n# char is %c", que[front_pos]);
                front_pos++;
            }
            front_pos = 0;

            while(front_pos <= rear_pos){  // 이후, front-pos를 0으로 초기화한 뒤, 다시  rear-pos까지 증가시키며 값 보여준다.
                printf("\n$ char is %c", que[front_pos]);
                front_pos++;
            }
        }
    }

    printf("\nfront is %d, rear is %d\n", front, rear);
    printf("\n----------------------------------\n\n\n");
}

void insert(void){
    printf("\n------------INSERT------------\n");
    printf("\n!! Input the character to INSERT: ");
    char input_char = getchar();
    getchar(); // reset Buffer

    if((front == 0 && rear == MAX-1) || (front == rear+1)){
        printf("\n***The Queue is OVERFLOWED!!!***\n");
        printf("\nfront is %d, rear is %d\n", front, rear);
        printf("\n----------------------------------\n\n\n");
        return ;
    }

    if(front == -1){  // 완전 비어있는 상태에서 값 삽입
        front = 0;
        rear = 0;

    }else{
        if(rear ==  MAX -1) rear = 0; // 뒷부분이 다 차있는 경우, rear를 맨 앞으로 옮겨서 앞에서 삽입
        else rear = rear + 1;  // 그 외의 경우, 뒤에서부터 삽입
    }

    que[rear] = input_char;

    printf("\nfront is %d, rear is %d\n", front, rear);
    printf("\n----------------------------------\n\n\n");

}

void delete(void){
    printf("\n--------------DELETE--------------\n");
    if(front == -1){
        printf("\n***The Queue is UNDERFLOWED!!!***\n");
        printf("\nfront is %d, rear is %d\n", front, rear);
        printf("\n----------------------------------\n\n\n");
        return ;

    }
    if(front == rear){  // 둘이 같이 있다는 말은 완전히 비어있다는 말. 따라서 초기화.
        front = rear = -1;

    }else{
        if(front == MAX-1){  // front = MAX-1이라는 말은 맨 끝까지 왔다는 말이므로, 다시 0번 위치로 초기화. 순환시켜서 삭제할 수 있도록
            front = 0;
        
        }else{
            front = front + 1;    // 일반적인 경우에는 그냥 front를 1씩 증가시켜가며 삭제

        }
    }
    printf("\n!! DELETED\n");
    printf("\nfront is %d, rear is %d\n", front, rear);
    printf("\n----------------------------------\n\n\n");

}

