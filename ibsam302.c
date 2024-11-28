#include <stdio.h>
int main(){
	int size,i,sum=0;
	printf("enter class size:\n");
	scanf("%d",&size);
	int marks[size];
	for(i=0; i<size; i++){
		printf("enter student%d marks:",i+1);
		scanf("%d",& marks [i]);
	}
	printf("enter your class strength:%d\n");
    for(i=0;i<size;i++){
	 printf("\n student marks record:\n");
	 scanf("%d",&marks[i]);
	 sum=sum+marks[i];
}
printf("\n student marks record:\n");
for(i=0; i<size; i++){
	printf("student%d marks=%d\n",i+1,marks[i]);
}
printf("class average is:%f",sum/size*1.0);
}

