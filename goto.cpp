#include<iostream>
using namespace std
void test()
{
    t:
    printf("You are in test function");
}

int main()
{
     printf("You are in main function");
    goto t;
          printf("You are in main function");
          t:
    return 0;
}
