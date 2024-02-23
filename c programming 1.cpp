
#include <stdio.h>
int main(){
    int num, remainder, temp, result = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    temp = num;
    while (temp != 0){
        remainder = temp % 10;
        result += remainder * remainder * remainder;
        temp = temp / 10;
    }
    
    if (result == num){
        printf("%d is an Armstrong Number.", num);
    }
    else {
        printf("%d is not an Armstrong Number.", num);
    }
    return 0;
}