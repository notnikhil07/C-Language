#include<stdio.h>

struct address{
    int houseNo;
    int block;
    char city[50];
    char state[50];
}adds;

void printAdd(struct address add);

int main(){
    struct address adds[5];
    //Input
    printf("Enter info for 1 person: ");
    scanf("%d ", &adds[0].houseNo);
    scanf("%d ", &adds[0].block);
    scanf("%s ", &adds[0].city);
    scanf("%s ", &adds[0].state);

    printf("Enter info for 2 person: ");
    scanf("%d ", &adds[1].houseNo);
    scanf("%d ", &adds[1].block);
    scanf("%s ", &adds[1].city);
    scanf("%s ", &adds[1].state);

    printf("Enter info for 3 person: ");
    scanf("%d ", &adds[2].houseNo);
    scanf("%d ", &adds[2].block);
    scanf("%s ", &adds[2].city);
    scanf("%s ", &adds[2].state);

    printf("Enter info for 4 person: ");
    scanf("%d ", &adds[3].houseNo);
    scanf("%d ", &adds[3].block);
    scanf("%s ", &adds[3].city);
    scanf("%s ", &adds[3].state);

    printf("Enter info for 5 person: ");
    scanf("%d ", &adds[4].houseNo);
    scanf("%d ", &adds[4].block);
    scanf("%s ", &adds[4].city);
    scanf("%s ", &adds[4].state);

    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
    printAdd(adds[4]);

    return 0;
}

void printAdd(struct address add){
    printf("address is : %d, %d, %s, %s\n", adds.houseNo, adds.block, adds.city, adds.state);
}