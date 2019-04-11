#include <stdio.h>

int main (){ 

int x; 

   printf("Welcome to my assessment\n Select which section you what to access:\n "); 
   printf("1: Encrption w rotation \n 2: Decrption w rotation\n 3: Encrption w subsition\n 4: Decrption w subsition\n ");
   printf("Please make your selection: ");
   
   scanf("%d", &x);
   
  
    switch (x){
    case 1: printf("You selected 1");
        break; 
    case 2: printf("You selected 2");
        break;
    case 3: printf("You selected 3");
        break;
    case 4: printf("You selected 4");
        break;
    default:
        printf("No option selected\n You must select 1,2,3,4");
    }

   return 0; 
}
