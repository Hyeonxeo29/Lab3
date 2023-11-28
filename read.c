#include <stdio.h>

int main(){
        FILE *file;
        file = fopen("testfile.txt", "r");
	char c;

	if(file==NULL){
                printf(" 파일을 열 수 없음\n");
                return 1;
        }

	while((c = fgetc(file))!=EOF){
		printf("%c", c);
	}

        fclose(file);

	return 0;
}
