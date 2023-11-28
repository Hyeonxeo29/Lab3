#include <stdio.h>

int main(){
	FILE *file;

	file = fopen("testfile.txt", "w");

	if(file==NULL){
		printf(" 파일을 열 수 없음\n");
		return 1;
	}

	fprintf(file, "Hello\n");
	fclose(file);

	return 0;
}
