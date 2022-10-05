#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n=10;
    char* ptr = (char*)malloc(n); // To get a memory loc from the heap //
    int size = 0;
    while(1)
    {
        if(size<n)
        {
            char ch = getchar();
            if((int)ch == 27)
            {
                break;
            }
            else
            {
                ptr[size] = ch;
                size++;
            }
        }
        else
        {
            n++;
            ptr = (char*)realloc(ptr, n); // To alter the size of dynamic variable //
        }
    }
    printf("Entered String: ");
    puts(ptr);
    free(ptr); // To free the alocated memory. Warning it will clear everything you've entered. //
    return 0;
}