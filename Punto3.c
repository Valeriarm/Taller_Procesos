/*
	Intergantes: Valeria Rivera 1626837
		     Cristian Perafan 1625690
		     Walter Santacruz 1630645
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(int argc, char** argv){
     pid_t pid;
     int status;
     pid = fork();

     if(pid!=0){
        waitpid(pid,NULL,0);
        printf("soy el padre, mi pid es: %d Goodbye\n", getpid());
     }else{
        printf("soy el hijo, mi pid es: %d Hello\n", getpid());
        sleep(1);
     }
}
