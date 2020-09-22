#include<stdio.h>
int ifelse(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    printf("%d",marks);
    if(marks>=50){ //number 50 up
        printf("pass");

    }
    else if(marks<50){
        printf("no pass");
    }
    else{
        printf("equal");
    }
}
