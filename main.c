//Tarea Diego Andres Veliz Arauz


#include <stdio.h>
#include <unistd.h>
#include<time.h>


int main()
{
    time_t t;  
    time(&t);

    int fork_result;
    
    printf("Programa de resgistro de Procesos\n\n");

    printf("%-35s %-8s %-8s %30s\n", "Process Type", "PID", "PPID", "Time");
    printf("%-35s %-8d %-8d %30s", "System Proccess", getpid() , getppid(), ctime(&t));

    fork_result = fork();
    if(fork_result==0)
    { 
     printf("%-35s %-8d %-8d %30s", "System Proccess", getpid() , getppid(), ctime(&t));
    }
    fork_result = fork();
    if(fork_result==0)
    { 
     printf("%-35s %-8d %-8d %30s", "System Proccess", getpid() , getppid(), ctime(&t));

    }
    fork_result = fork();
    if(fork_result==0)
    { 
     printf("%-35s %-8d %-8d %30s", "System Proccess", getpid() , getppid(), ctime(&t));

    }        
}
