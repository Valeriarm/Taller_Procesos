/*
	Intergantes: Valeria Rivera 1626837
		     Cristian Perafan 1625690
		     Walter Santacruz 1630645
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/wait.h>

int main(int argc, char **argv){
     int x;
     pid_t pid;
     char *filename="code-02.txt";
     int fd;

     fd=open(filename, O_CREAT|O_WRONLY|O_TRUNC, S_IRWXU);

     x=100;
     pid=fork();

     if(pid==0){
        x++;
	dprintf(fd,"Soy el hijo y mi pid es %d, x es %d\n", getpid(),x);
     }else{
	x+=2;
	dprintf(fd,"Soy el padre y mi PID es %d, x es %d\n", getpid(), x);
     }

     close(fd);
}
