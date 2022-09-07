#include <stdio.h>
#include <string.h>
void rot13(char* msg){


    for(int i=0; i<strlen(msg);i++){
        if(msg[i] < 110/*110 == n*/){
            msg[i]+=13; // move charater 13 times forward
        }else{
            msg[i]-=13; // move charater 13 times backward
        }

    }
}

int main(){
    char msg[255];
    printf("enter your message: ");
    fgets(msg ,255,stdin);// user input
    rot13(msg);// crypt message
    printf("your crypted message : %s",msg);
    return 0;

}
