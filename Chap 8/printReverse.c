// C program to print reverse of words in 
// a string. https://www.geeksforgeeks.org/print-words-string-reverse-order/
#include <stdio.h> 
#include <string.h> 
  
void printReverse(char str[]) 
{ 
    int length = strlen(str); 
  
    // Traverse string from end 
    int i; 
    for (i = length - 1; i >= 0; i--) { 
        if (str[i] == ' ') { 
  
            // putting the NULL character at the  
            // position of space characters for 
            // next iteration.          
            str[i] = '\0'; 
  
            // Start from next charatcer      
            printf("%s ", &(str[i]) + 1); 
        } 
    } 
  
    // printing the last word 
    printf("%s", str); 
} 
  
// Driver code 
int main() 
{ 
    char str[] = "I AM A GEEK"; 
    printReverse(str);
    printf("\n");
    return 0;
} 