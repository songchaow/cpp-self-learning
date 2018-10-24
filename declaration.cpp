#include <stdio.h>
extern int global_var; // cause warning!
int global_var;
int main()
{
    int haha(int,int);
    printf("%d\n",haha(global_var,3));
    
    return 0;
}