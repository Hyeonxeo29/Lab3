#include <stdio.h>

int main(){
	FILE *file;
	long pos;
	
	file = fopen("testfile.txt", "r+");

	if(file==NULL){
		printf(" 파일을 열 수 없음\n");
	        return 1;
	}

	fseek(file, 5, SEEK_SET);
	fprintf(file, " Hi \n");
	
	fclose(file);
        return 0;
}
