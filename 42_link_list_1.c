#include <stdio.h>
#include <stdlib.h>

struct NODE
{
    int info;
    struct NODE *next;
};

int main()
{
    int num, i, n;

    struct NODE *head = NULL, *tail = NULL, *temp, *nextadd;

    printf("\n\tHow many numbers do you want ? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\n\tEnter The Number %d :", i + 1);
        scanf("%d", &num);

        nextadd = (struct NODE *)malloc(sizeof(struct NODE));

        nextadd->info = num;
        nextadd->next = NULL;

        if (head == NULL)
        {
            head = nextadd;
            tail = nextadd;
        }
        else
        {
            tail->next = nextadd;
            tail = nextadd;
        }
    }
    printf("\n\n\tThe List :\n\t");

    for (temp = head; temp != NULL; temp = temp->next)
    {
        printf("%d -> ", temp->info);
    }

    printf("NULL");

    return 0;
}