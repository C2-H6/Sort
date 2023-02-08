#include <stdio.h>
#include <stdlib.h>

#include"include/data.h"


data *init(int nbr)
{
    data *head, *list;

    head = list = malloc(sizeof(data) * nbr);

    if (!list) {
        perror("error in memory allocation\n");
        exit(1);
    }

    for (int i = 1; i <= nbr ; ++i) {
        list->nbr = i;
        list->next = (i == nbr) ? NULL : list + 1;  
        list->prev = (i == 1) ? NULL : list - 1;
        list = list->next;
    }

    return head;
}

//---------------------------- use ----------------------------//

void printList(data *list)
{
    while (list->next) {
        printf("%d\n",list->nbr);
        list = list->next;
    }
    while (list) {
        printf("%d\n",list->nbr);
        list = list->prev;
    }
}

int main(void)
{
    data *list = init(100);

    printList(list);
    free(list);
    return 0;
}