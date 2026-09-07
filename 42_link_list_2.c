#include <stdio.h>
#include <stdlib.h>

struct POINTER *head = NULL, *tail = NULL, *temp, *nextaddress, *ptr, *middle, *new_number;

struct POINTER
{
    int info;

    struct POINTER *next;

    struct POINTER *prev;
};

int WHOLE_LIST()
{

    if (head == NULL)
    {
        printf("\n\tError: List is empty!\n\n");

        return 0;
    }

    printf("\n\n\tLIST :\t");

    for (temp = head; temp != NULL; temp = temp->next)
    {
        printf("%d -> ", temp->info);
    }

    printf("NULL");

    printf("\n\n");

    return 0;
}

int PRINT_FORWARD()
{

    if (head == NULL)
    {
        printf("\n\tError: List is empty!\n\n");

        return 0;
    }

    printf("\n\tFORWARD LIST :\t");

    {
        for (temp = head; temp != NULL; temp = temp->next)
        {
            printf("%d -> ", temp->info);
        }

        printf("NULL");
    }
    printf("\n\n");

    return 0;
}

int PRINT_BACKWARD()
{

    if (tail == NULL)
    {
        printf("\n\tError: List is empty!\n\n");

        return 0;
    }

    printf("\n\tBACKWARD LIST :\t");

    {
        for (temp = tail; temp != NULL; temp = temp->prev)
        {
            printf("%d -> ", temp->info);
        }

        printf("NULL");
    }
    printf("\n\n");

    return 0;
}

int DELETE_FIRST()
{
    struct POINTER *first;

    if (head == NULL)
    {
        printf("\n\tError: List is empty!\n\n");

        return 0;
    }

    first = head->next;

    head->next = first->next;

    printf("\n\tLIST :\t");

    {
        for (temp = first; temp != NULL; temp = temp->next)
        {
            printf("%d -> ", temp->info);
        }

        printf("NULL");
    }
    printf("\n\n");

    return 0;
}

int DELETE_LAST()
{

    struct POINTER *last;

    if (tail == NULL)
    {
        printf("\n\tList is empty!\n\n");

        return 0;
    }

    last = tail->prev;

    last->next = NULL;

    printf("\n\tLIST :\t");

    {
        for (temp = head; temp != NULL; temp = temp->next)
        {
            printf("%d -> ", temp->info);
        }

        printf("NULL");
    }
    printf("\n\n");

    return 0;
}

int DELETE_MIDDLE()
{

    int del;

    while (1)
    {
        printf("\n\tEnter The Number You Want To Delete :");
        if (scanf("%d", &del) != 1 || del <= 0)
        {
            printf("\n\tEnter Natural Number Only.\n");

            while (getchar() != '\n')
                ;

            continue;
        }
        break;
    }

    int found = 0;

    for (temp = head; temp != NULL; temp = temp->next)
    {
        if (del == temp->info)
        {
            if (temp->next != NULL)
            {
                temp->next->prev = temp->prev;
            }

            if (temp->prev != NULL)
            {
                temp->prev->next = temp->next;
            }

            else
            {
                head = temp->next;
            }

            break;
        }
        found = 1;
    }

    if (!found)
    {
        printf("%d Doesn't Exist In List.", del);

        return 0;
    }

    printf("\n\tLIST :\t");

    for (temp = head; temp != NULL; temp = temp->next)
    {
        printf("%d -> ", temp->info);
    }

    printf("NULL");

    printf("\n\n");

    return 0;
}

int ADD_FIRST()
{

    if (head == NULL)
    {
        printf("\n\tError: List is empty!\n\n");

        return 0;
    }

    temp = (struct POINTER *)malloc(sizeof(struct POINTER));

    int add;

    while (1)
    {
        printf("\n\tEnter The Number You Want To Add In First Place:");
        if (scanf("%d", &add) != 1 || add <= 0)
        {
            printf("\n\tEnter Natural Number Only.\n");

            while (getchar() != '\n')
                ;

            continue;
        }
        break;
    }

    temp->info = add;

    temp->prev = NULL;
    temp->next = head;

    if (head != NULL)
        head->prev = temp;

    head = temp;
    printf("\n\tLIST :\t");

    for (ptr = head; ptr != NULL; ptr = ptr->next)
    {
        printf("%d -> ", ptr->info);
    }

    printf("NULL");

    printf("\n\n");

    return 0;
}

int ADD_LAST()
{
    if (tail == NULL)
    {
        printf("\n\tError: List is empty!\n\n");

        return 0;
    }

    temp = (struct POINTER *)malloc(sizeof(struct POINTER));

    int add;

    while (1)
    {
        printf("\n\tEnter The Number You Want To Add In Last Place:");
        if (scanf("%d", &add) != 1 || add <= 0)
        {
            printf("\n\tEnter Natural Number Only.\n");

            while (getchar() != '\n')
                ;

            continue;
        }
        break;
    }

    temp->info = add;

    temp->prev = tail;
    temp->next = NULL;

    if (tail != NULL)
        tail->next = temp;

    tail = temp;
    printf("\n\tLIST :\t");

    for (ptr = head; ptr != NULL; ptr = ptr->next)
    {
        printf("%d -> ", ptr->info);
    }

    printf("NULL");

    printf("\n\n");

    return 0;
}

int ADD_MIDDLE()
{

    int location;

    new_number = (struct POINTER *)malloc(sizeof(struct POINTER));
    if (new_number == NULL)
    {
        printf("\n\tMemory allocation failed.\n");

        return 1;
    }

    while (1)
    {
        printf("\n\tEnter The Number You Want To Add :");
        if (scanf("%d", &new_number->info) != 1 || new_number->info <= 0)
        {
            printf("\n\tEnter Natural Number Only.\n");

            while (getchar() != '\n')
                ;

            continue;
        }
        break;
    }

restart:

    while (1)
    {
        printf("\n\tEnter The Number You Want To Add After:");
        if (scanf("%d", &location) != 1)
        {
            printf("\n\tEnter Natural Number Only.\n");

            while (getchar() != '\n')
                ;

            continue;
        }
        break;
    }

    int guess = 0;

    for (temp = head; temp != NULL; temp = temp->next)
    {
        if (location == temp->info)
        {
            middle = temp;

            guess = 1;

            break;
        }
    }

    if (!guess)
    {
        printf("\n\tEnter Number In List Only.\n");

        goto restart;
    }

    new_number->next = middle->next;

    new_number->prev = middle;

    if (middle->next != NULL)
        middle->next->prev = new_number;

    middle->next = new_number;

    printf("\n\tLIST :\t");

    for (ptr = head; ptr != NULL; ptr = ptr->next)
    {
        printf("%d -> ", ptr->info);
    }

    printf("NULL");

    printf("\n\n");

    return 0;
}

int FREE()
{

    free(head);
    head = NULL;

    free(tail);
    tail = NULL;

    free(temp);
    temp = NULL;

    free(nextaddress);
    nextaddress = NULL;
}

int main()
{
    int i, num, choice, del;
    int *a;

    while (1)
    {
        printf("\n\tHow many numbers do you want :");
        if (scanf("%d", &num) != 1 || num < 0)
        {
            printf("\n\tEnter Natural Number Only.\n");

            while (getchar() != '\n')
                ;

            continue;
        }
        break;
    }

    a = malloc(num * sizeof(int));

    if (a == NULL)
    {
        printf("\n\tError: Memory allocation failed.\n");

        return 1;
    }

    for (i = 0; i < num; i++)
    {
        printf("\n\tEnter Number %d :", i + 1);
        if (scanf("%d", &a[i]) != 1 || a[i] <= 0)
        {
            printf("\n\tEnter Whole Number Only.\n");

            while (getchar() != '\n')
                ;

            i--;
        }

        nextaddress = (struct POINTER *)malloc(sizeof(struct POINTER));

        nextaddress->info = a[i];
        nextaddress->next = NULL;
        nextaddress->prev = tail;

        if (head == NULL)
        {
            head = nextaddress;
        }
        else
        {
            tail->next = nextaddress;
        }
        tail = nextaddress;
    }

    WHOLE_LIST();

    printf("\n\t------------------------"
           "\n\t1. Print Forward"
           "\n\t2. Print Backward"
           "\n\t3. Delete Number First"
           "\n\t4. Delete Number Last"
           "\n\t5. Delete in Number Middle"
           "\n\t6. Add Number First"
           "\n\t7. Add Number Last"
           "\n\t8. Add in Number Middle"
           "\n\t------------------------\n");

    while (1)
    {
        printf("\n\tWhat Would You Like To Do :");
        if (scanf("%d", &choice) != 1 || choice < 1 || choice > 8)
        {
            printf("\n\tEnter Valid Option\n");

            while (getchar() != '\n')
                ;

            continue;
        }
        break;
    }

    switch (choice)
    {
    case 1:

        PRINT_FORWARD();

        break;

    case 2:
        PRINT_BACKWARD();

        break;

    case 3:
        DELETE_FIRST();

        break;

    case 4:
        DELETE_LAST();

        break;

    case 5:

        DELETE_MIDDLE();

    case 6:

        ADD_FIRST();

    case 7:

        ADD_LAST();

    case 8:

        ADD_MIDDLE();
    }

    FREE();

    return 1;
}