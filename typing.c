#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_SENTENCE_LENGTH 256


const char practice_sentence[] = 
"God protect and preserve us. Long live our nation!";

int main() {
     srand((unsigned int)time(NULL));
     char user_input[MAX_SENTENCE_LENGTH];

     printf("아래 문장을 입력하세요.\n%s\n", practice_sentence);

     time_t start_time, end_time;
     time(&start_time);

     printf("입력: ");
     fgets(user_input, sizeof(user_input), stdin);

     time(&end_time);

     int err_count = 0;
     int sentence_length = strlen(practice_sentence);

     for (int i = 0; practice_sentence[i] != '\0' && user_input[i] != '\0'; i++) {
	     if (practice_sentence[i] != user_input[i]) {
		     err_count++;
	     }
     }

     double elapsed_time = difftime(end_time, start_time);
     double average_typing_speed = 0;

     if (elapsed_time > 0) {
	      average_typing_speed = (sentence_length * 60.0) / elapsed_time;
     }

     printf("\n실수 횟수: %d\n", err_count);
	     printf("평균 분당 타자수: %.2f \n", average_typing_speed);

	     return 0;
}
                    
