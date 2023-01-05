#include <stdio.h>
#include <stdlib.h>

int main()
{
   float c=0,b[10];
   int a;


    for(a=0;a<10;a++){
        printf("digite a temperatura\n");
        scanf("%d",&b[a]);

    }
    for(a=0;a<10;a++){
      if(b[a]>c){
        c=b[a];
      }
        printf("%d",c);
    }




    return 0;
}
