#include "functions.c"

int main(void)
{
    char option = 'h';

    
    while(1)
    {
        option = getchar();
        switch (option)
        {
        case 'h':
            printf("hi");
            break;
        
        default:
            break;
        }
    }
    return 0;
}