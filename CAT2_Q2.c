// Array data structure
/*
Name:Benard Kimani
Reg no: CT101/G/23293/24
*/
 
#include <stdio.h>

int main() {
    
    int i;
    int j;
    
    int scores[2][2]= { {65, 92},  {84, 72},
          {35, 59},   {70, 67}   };

    
    for ( i=0; i<2; i++) {
        for ( j=0; j<2; j++) {
           
            printf("marks [%d][%d] =%d\n ", scores[i][j]);  
        
        }
    }
    return 0;
}