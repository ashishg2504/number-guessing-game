// this is a number guessing game
#include<stdio.h>
#include<stdlib.h> //library for random number
#include<time.h> //library for time
int main(){
    int guess,attempt=1;
    srand(time(0)); //input of random number 
    int num=rand()%100; //dividing number by 100 and storing remainder in order to make number two digit
        printf("start guessing two digit number\n");
    do{
        scanf("%d",&guess);
        if(guess>num){
            printf("lower number please\n");
        }else if(guess<num){
            printf("higher number please\n");
        }else{
            printf("congrats! you guessed number in %d attempt\n",attempt);
        }
        attempt++;
    }while(guess!=num);
return 0;
}