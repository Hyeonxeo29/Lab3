#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(){
	pid_t pid;

	printf("fork 함수 호출\n");
	pid = fork();

	if(pid ==0){
		printf(" 생성 프로세스 \n");
	}
	
	else if (pid > 0){
		printf(" 실행 프로세스 \n");
	}

	else {
		printf("실패\n");
	}
}
