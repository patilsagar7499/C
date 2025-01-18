#include<stdio.h>
#include<stdlib.h>
// enum Bool {False,True};
// int main()
// {
//     enum Bool var;
//     var=True;
//     printf("%d",var);
//     return 0;
// }

//***************Need of Enum**********************
//1)Enums can be declared in the local scope
// int main()
// {
//     enum Bool {False,True} var;
//     var=True;
//     printf("%d",var);
//     return 0;
// }

//2)Enums are Automatically initialize by the compiler
// int main()
// {
//     enum Bool {False,True} var;
//     var=True;
//     printf("%d",var); o/p:1
//     return 0;
// }

//******************IMP*****************************
//1)Two or more names can have same value
// int main()
// {
//     enum Bool {False=0,True=0} var;
//     var=True;
//     printf("%d",var); o/p:0
//     return 0;
// }

//2)We can assign values in any order.All un assigned names will get value as value of previous name=1
// int main()
// {
//     enum Bool {False=100,True} var;
//     var=True;
//     printf("%d",var); o/p:101
//     return 0;
// }

//3)Only integral values are allowed
// int main()
// {
//     enum Bool {False=100.5,True} var;
//     var=True;
//     printf("%d",var); o/p:Error
//     return 0;
// }

//4)All enum constant must be unique in their scope.
// int main()
// {
//     enum Bool {False=100,True=9} var;
//     enum Bool {False=101,True=8} var1;
//     var=True;
//     printf("%d",var); o/p:Error
//     return 0;
// }