#include <stdio.h>
#include<math.h>
int calculateLength(int n){  
    int length = 0;  
    while(n != 0){  
        length = length + 1;  
        n = n/10;  
    }  
    return length;  
}  
int main()  
{  
    int num;
    scanf("%d",&num);
    int rem,sum=0;
    int len = calculateLength(num);  
    int n = num;  
    while(num > 0){  
        rem = num%10;  
        sum = sum + (int)pow(rem,len);  
        num = num/10;  
        len--;  
    }  
    if(sum == n)  
        printf("True");  
    else  
        printf("False");  
   
    return 0;  
} 