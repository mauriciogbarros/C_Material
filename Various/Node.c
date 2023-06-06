#include <stdio.h>
#include <stdlib.h>

struct digit
{
    int num;
    struct digit * next;
};

struct digit * createDigit(int dgt);
void append(struct digit *end, struct digit *begin);
void freeDigit(struct digit *start);
void printDigits(struct digit *start);
struct digit * readDigits(void);
int divisibleByThree(struct digit *start);
struct digit * searchDigit(struct digit *start, int dgt);
int changeThrees(struct digit * start);
struct digit * reverseDigits(struct digit * start);
int countRedun(struct digit * start);

int main(void)
{
    int searchDgt = 0;

    struct digit *first = readDigits();
    struct digit *search = NULL;
    struct digit *reverse = reverseDigits(first);

    printDigits(first);
    printDigits(reverse);

    printf("%d\n", divisibleByThree(first));

    printf("Search for: ");
    scanf("%d", &searchDgt);
    search = searchDigit(first, searchDgt);

    freeDigit(first);

    return 0;
}

struct digit * createDigit(int dgt)
{
    struct digit * ptr;
    
    ptr = (struct digit *)malloc(sizeof(struct digit));
    ptr->num = dgt;
    ptr->next = NULL;
    
    return ptr;
}

void append(struct digit *end, struct digit *begin)
{
    end->next = begin;
}

void freeDigit(struct digit *start)
{
    struct digit *next = start, *last;

    while(next != NULL)
    {
        last = next->next;
        free(next);
        next = last;
    }
}

void printDigits(struct digit *start)
{
    struct digit *last = start;

    while(last != NULL)
    {
        printf("%d", last->num);
        last = last->next;
    }
    printf("\n");
}

struct digit * readDigits(void)
{
    char c = '\0';
    int d;
    struct digit *start = NULL, *next, *new;
    
    while(c != '\n')
    {
        scanf("%c", &c);
        if(c != '\n')
        {
            d = c - 48;
            new = createDigit(d);
            if(start == NULL)
            {
                start = new;
                next = start;
            }
            else
            {
                while(next->next != NULL)
                    next = next->next;

                append(next,new);
            }
        }
    }

    return start;
}

int divisibleByThree(struct digit *start)
{
    int sum = 0;
    struct digit *last = start;

    while(last != NULL)
    {
        sum += last->num;
        last = last->next;
    }

    return (sum % 3) == 0 ? 1 : 0;
}

struct digit * searchDigit(struct digit *start, int dgt)
{
    struct digit * ptr = start;

    while((ptr != NULL) && (ptr->num != dgt))
        ptr = ptr->next;

    return ptr;
}

int changeThrees(struct digit * start)
{
    int n = 0;
    struct digit * ptr = start;

    while(ptr != NULL)
    {
        if(ptr->num == 3)
        {
            ptr->num = 9;
            n++;
        }

        ptr = ptr->next;
    }

    return n;
}

struct digit * reverseDigits(struct digit * start)
{
    struct digit * end = start;
    struct digit * first = NULL;
    struct digit * last = NULL;
    struct digit * before = NULL;

    if(start != NULL)
    {
        last = createDigit(start->num);
        first = last;

        while(end->next != NULL)
        {
            end = end->next;
            before = createDigit(end->num);
            first = before;

        }
    }

    return first;
}

int countRedun(struct digit * start)
{
    int n = 0, num = -1;
    struct digit * next = start;
    struct digit * ptr = NULL;

    while(next != NULL)
    {
        if(num != next->num)
        {
            num = next->num;
            ptr = next->next;
            while(ptr != NULL)
            {
                if(ptr->num == num)
                    n++;
                
                ptr = ptr->next;
            }
        }
        next = next->next;
    }

    return n;
}