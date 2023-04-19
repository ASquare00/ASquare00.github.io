#include<stdio.h>
int main(){
    int a;
    printf("Enter your no.: ");
    scanf("%d",&a);
    switch (a>0){
        case 1:
            printf("No. is positive.");
        case 0:
            switch(a<0){
                case 1:
                    printf("No. is negative");
                case 0:
                    printf("neither positive nor negative");
            }
    }
    return 0;
}