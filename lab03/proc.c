#include  <stdio.h>
#include  <sys/types.h>

void  ChildProcess(int num);                /* child process prototype  */
void  ParentProcess(int num);               /* parent process prototype */

void  main(void)
{
     pid_t  pid;
     pid = fork();
     wait(NULL);
     int num;
     if (pid == 0){
        printf ("Enter the number: ");
        scanf ("%d", &num);
	ChildProcess(num);
     }
     else{
	printf ("Enter the number: ");
        scanf ("%d", &num);
	ParentProcess(num);
     }
}

void  ChildProcess(int num)
{
        int i, j;
        j = num;

        for (i=1; j > 1; j = j -1) {
                i=i*j;
        }

        printf("The factorial of %d is %d\n",num,i);
}

void  ParentProcess(int num)
{
        int i, j;
        j = num;

        for (i=1; j > 1; j = j -1) {
                i=i*j;
        }

        printf("The factorial of %d is %d\n",num,i);
}
