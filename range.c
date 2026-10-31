#include <stdio.h>

int main()
{
    int marks;
    printf("Input your marks:");
    scanf("%d", &marks);
    switch (marks)
    {
    case 90 ... 100:
        printf("Grade A");
        break;
    case 84 ... 89:
        printf("Grade A-");
        break;
    case 80 ... 83:
        printf("Grade B+");
        break;
    case 75 ... 79:
        printf("Grade B");
        break;
    case 70 ... 74:
        printf("Grade B-");
        break;
    case 65 ... 69:
        printf("Grade C+");
        break;
    case 60 ... 64:
        printf("Grade C");
        break;
    case 50 ... 59:
        printf("Grade D");
        break;

    case 0 ... 49:
        printf("Grade F");
        break;
    default:
        printf("Invalid marks");
    }
    return 0;
}