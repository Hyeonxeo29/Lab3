#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define MSGSIZE  16

char *msg[2] = {"Hello", "World"};

int main(){
	char buf[MSGSIZE];
	int p[2], i;

	if (pipe(p) == -1){
		perror("파이프 호출 실패 \n");
		exit(1);
	}

	for (i=0; i<2; i++){
		write(p[1], msg[i], MSGSIZE);
	}

	close(p[1]);

	for (i=0; i<2; i++){
		read(p[0], buf, MSGSIZE);
		printf("%s \n", buf);
	}

	close(p[0]);
}
