#include <stdio.h>
int main(){
int any;
printf("Any??: ");
scanf("%d", &any);
if(any%4 1= 0)
  printf("No");
else if(any%100 != 0)
        printf("Si");
    else if(any%400 != 0)
           printf("No");
         else printf("Si");
printf("\n");
return 0;
}
