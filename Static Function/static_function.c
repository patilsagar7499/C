#include<stdio.h>
#include<stdlib.h>
int fun(int,int);
int main()
{
 //1)Static funs are restricted to the files where they are declared.
 //2)Reuse of the same fun in another file is possible, by creating same name fun without conflict.
 int x=fun(2,3);
 printf("%d",x);
    return 0;
}