#include <stdio.h>


int main(){
char ism[10];
int ball;
  printf("Ism kiriting\n");
    scanf("%s", ism);
       printf("Ball kiriting\n");
           scanf("%d", ball);

  FILE *f = fopen("natija.txt", "w");

    if(ball<= 5){
        fprintf(f ," Min: Ism %s , ball %d\n", ism, ball);
    
     } else{
        fprintf(f ,"Max: Ism %s , ball %d\n ", ism, ball);
     }
    
    fclose(f);

    return 0;
    
}