#include <stdio.h>

void Encrpt( char complexer[], int slider); 

int main() { 
    char complexer[50]; // Complexer is an array of 50 letters  
    int slider; 

    printf("Enter a message to be encrpted: ");
    scanf("%s", complexer);
    
    printf("Enter the amount of Slides to be completed: \n * The more slides the more encrpted your message gets\n");
    scanf("%d", &slider); 
    
    Encrpt(complexer, slider); 
    
  return 0;
} 
 void Encrpt( char complexer[], int slider){
     int x = 0; 
     
     while (Encrpt [x] != '\0'){
         if ((Encrpt [x] += slider) >= 65 && (Encrpt [x] += slider)< 90) {
             Encrpt [x] += slider; 
        } else{
            Encrpt [x] += (slider - 25); 
        }  
        x++; 
    }
    printf("Your ecrpted message is: %s", complexer); 
}
