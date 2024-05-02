#include<stdio.h>
#include<string.h>

// Is Palindrome Function 
int is_palindrome(char inputString[]){
    int stringLength = strlen(inputString);
    for(int i = 0; i < stringLength/2; i++){
        if(inputString[i] != inputString[stringLength - 1 - i]){
            return 0;
        }
    }
    return 1;
}

// Main Function
int main(){
char str[1000];
scanf("%s",str);
int isPalindrome =  is_palindrome(str);
if(isPalindrome == 1){
    printf("Palindrome\n");
} else{
    printf("Not Palindrome\n");
}
 return 0;
 }