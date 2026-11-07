#include <stdio.h>

int main()
{
  for(int i = 1; i<=20 ; i++){

    if(i%3==0){
      
        continue;

    }
    else if(i==17){

    break;
    }

printf("%d\n",i);
  }

    return 0;
}
