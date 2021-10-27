#include<stdio.h>
#include<unistd.h>
int main()
{
printf("Parent process Id is %d\n", getppid());
printf("Child process Id is %d\n", getpid());

return 0;
}
