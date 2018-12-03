#include <stdio.h>
#include <string.h>
int main(void)
{
	char s[21];
	int i,x;
	scanf("%s",s);
	if(strcmp(s,"WBWBWWBWBWBWWBWBWWBW")==0){
		printf("Do\n");
	}else if(strcmp(s,"WBWWBWBWBWWBWBWWBWBW")==0){
		printf("Re\n");
	}else if(strcmp(s,"WWBWBWBWWBWBWWBWBWBW")==0){
		printf("Mi\n");
	}else if(strcmp(s,"WBWBWBWWBWBWWBWBWBWW")==0){
		printf("Fa\n");
	}else if(strcmp(s,"WBWBWWBWBWWBWBWBWWBW")==0){
		printf("So\n");
	}else if(strcmp(s,"WBWWBWBWWBWBWBWWBWBW")==0){
		printf("La\n");
	}else if(strcmp(s,"WWBWBWWBWBWBWWBWBWWB")==0){
		printf("Si\n");
	}
	return 0;
}
