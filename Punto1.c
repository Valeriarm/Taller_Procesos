/*
	Intergantes: Valeria Rivera 1626837
		     Cristian Perafan 1625690
		     Walter Santacruz 1630645
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(char *argc, char ** argv){
	int x;
	x=0;
	pid_t pid = fork();

	if(!pid){
		x=1;
		printf("soy el hijo, mi pid es: %d y x = %d", getpid(),x);
	}else{
		wait(NULL);
		x=2;
		printf("\nsoy el padre, mi pid es: %d y x = %d", getpid(),x);
	}
return 0;
}
