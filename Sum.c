#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<sys/wait.h>

// A simple program, which takes in input from child process and send its output to a parent process
int main()
{
    int fd1[2],fd2[2],fd3[2],fd4[2],fd5[2],fd6[2],fd7[2],fd8[2],fd9[2],fd10[2];
    int arr[1000] ,sum[10] = {0},total = 0;

    for(int i = 0; i<=1000 ;i++)
	arr[i]=i+1;
    if (pipe(fd1)==-1)
    {
        printf("Pipe Failed" );
        return 1;
    }

    int cpid1 = fork();

    if (cpid1 < 0)
    {
        printf("fork Failed" );
        return 1;
    }
    if (cpid1 == 0 )
    {
    
    for(int i = 0; i<=100;i++)
	sum[0] += arr[i];
      write(fd1[1], &sum[0], sizeof(int));
      printf("From Child Process 1 : %d\n", sum[0]);
      close(fd1[1]);
      exit(0);
    }
    else
    {
      wait(NULL);
    if (pipe(fd2)==-1)
    {
        printf("Pipe Failed" );
        return 1;
    }

    int cpid2 = fork();

    if (cpid2 < 0)
    {
        printf("fork Failed" );
        return 1;
    }
    if (cpid2 ==0 )
    {
    
    for(int i = 101; i<=200;i++)
	sum[1] += arr[i];
      write(fd2[1], &sum[1], sizeof(int));
      printf("From Child Process 2 : %d\n", sum[1]);
      close(fd2[1]);
      exit(0);
    }
    else
    {
	wait(NULL);
    if (pipe(fd3)==-1)
    {
        printf("Pipe Failed" );
        return 1;
    }

    int cpid3 = fork();

    if (cpid3 < 0)
    {
        printf("fork Failed" );
        return 1;
    }
    if (cpid3 ==0 )
    {
    
    for(int i = 201; i<=300;i++)
	sum[2] += arr[i];
      write(fd3[1], &sum[2], sizeof(int));
      printf("From Child Process 3 : %d\n", sum[2]);      
      close(fd3[1]);
      exit(0);
    }
    else
    {
	wait(NULL);
    if (pipe(fd4)==-1)
    {
        printf("Pipe Failed" );
        return 1;
    }

    int cpid4 = fork();

    if (cpid4 < 0)
    {
        printf("fork Failed" );
        return 1;
    }
    if (cpid4 ==0 )
    {
    
    for(int i = 301; i<=400;i++)
	sum[3] += arr[i];
      write(fd4[1], &sum[3], sizeof(int));
      printf("From Child Process 4 : %d\n", sum[3]);      
      close(fd4[1]);
      exit(0);
    }
    else
    {
	wait(NULL);
    if (pipe(fd5)==-1)
    {
        printf("Pipe Failed" );
        return 1;
    }

    int cpid5 = fork();

    if (cpid5 < 0)
    {
        printf("fork Failed" );
        return 1;
    }
    if (cpid5 ==0 )
    {
    
    for(int i = 401; i<=500;i++)
	sum[4] += arr[i];
      write(fd5[1], &sum[4], sizeof(int));
      printf("From Child Process 5 : %d\n", sum[4]);
      close(fd5[1]);
      exit(0);
    }
    else
    {
	wait(NULL);
    if (pipe(fd6)==-1)
    {
        printf("Pipe Failed" );
        return 1;
    }

    int cpid6 = fork();

    if (cpid6 < 0)
    {
        printf("fork Failed" );
        return 1;
    }
    if (cpid6 ==0 )
    {
    
    for(int i = 501; i<=600;i++)
	sum[5] += arr[i];
      write(fd6[1], &sum[5], sizeof(int));
      printf("From Child Process 6 : %d\n", sum[5]);
      close(fd6[1]);
      exit(0);
    }
    else
    {
	wait(NULL);
    if (pipe(fd7)==-1)
    {
        printf("Pipe Failed" );
        return 1;
    }

    int cpid7 = fork();

    if (cpid7 < 0)
    {
        printf("fork Failed" );
        return 1;
    }
    if (cpid7 ==0 )
    {
    
    for(int i = 601; i<=700;i++)
	sum[6] += arr[i];
      write(fd7[1], &sum[6], sizeof(int));
      printf("From Child Process 7 : %d\n", sum[6]);
      close(fd7[1]);
      exit(0);
    }
    else
    {
	wait(NULL);
    if (pipe(fd8) ==-1)
    {
        printf("Pipe Failed" );
        return 1;
    }

    int cpid8 = fork();

    if (cpid8 < 0)
    {
        printf("fork Failed" );
        return 1;
    }
    if (cpid8 ==0 )
    {
    
    for(int i = 701; i<=800;i++)
	sum[7] += arr[i];
      write(fd8[1], &sum[7], sizeof(int));
      printf("From Child Process 8 : %d\n", sum[7]);
      close(fd8[1]);
      exit(0);
    }
    else
    {
	wait(NULL);
    if (pipe(fd9)==-1)
    {
        printf("Pipe Failed" );
        return 1;
    }

    int cpid9 = fork();

    if (cpid9 < 0)
    {
        printf("fork Failed" );
        return 1;
    }
    if (cpid9 ==0 )
    {
    
    for(int i = 801; i<=900;i++)
	sum[8] += arr[i];
      write(fd9[1], &sum[8], sizeof(int));
      printf("From Child Process 9 : %d\n", sum[8]);
      close(fd9[1]);
      exit(0);
    }
    else
    {
	wait(NULL);
    if (pipe(fd10)==-1)
    {
        printf("Pipe Failed" );
        return 1;
    }

    int cpid10 = fork();

    if (cpid10 < 0)
    {
        printf("fork Failed" );
        return 1;
    }
    if (cpid10 ==0 )
    {
    
    for(int i = 901; i<=1000;i++)
	sum[9] += arr[i];
      write(fd10[1], &sum[9], sizeof(int));
      printf("From Child Process 10 : %d\n", sum[9]);
      close(fd10[1]);
      exit(0);
    }
    else
    {
	wait(NULL);
      int total,sum;
      read(fd1[0], &sum, sizeof(int));
      total += sum;
      close(fd1[0]);
      read(fd2[0], &sum, sizeof(int));
      total += sum;
      close(fd2[0]);
      read(fd3[0], &sum, sizeof(int));
      total += sum;
      close(fd3[0]);
      read(fd4[0], &sum, sizeof(int));
      total += sum;
      close(fd4[0]);      
      read(fd5[0], &sum, sizeof(int));
      total += sum;
      close(fd5[0]);      
      read(fd6[0], &sum, sizeof(int));
      total += sum;
      close(fd6[0]);      
      read(fd7[0], &sum, sizeof(int));
      total += sum;
      close(fd7[0]);      
      read(fd8[0], &sum, sizeof(int));
      total += sum;
      close(fd8[0]);      
      read(fd9[0], &sum, sizeof(int));
      total += sum;
      close(fd9[0]);      
      read(fd10[0], &sum, sizeof(int));
      total += sum;
      close(fd10[0]);      
      
      printf("Total : %d\n", total);
      
    }
    }
    }
    }
    }
    }
    }
    }    
    }
    }

}
