#include "multi.h"
int main(){
    char id[10]="minipro",Uid[10],pass[10],password[10]="akshat";
    int i;
    printf("\n\n\t\tEnter the UID to login:");
	scanf("%s",Uid);
	if (strcmp(Uid,id)==0){
        printf("\n\nUID Match!\nLOADING");
        for(i=0;i<=6;i++)
        { 
            fordelay(100000000);
            printf(".");
        }   
    }
    else
        printf("\n\nWrong UId");
    printf("\n\n\t\tEnter the password to login:");
    scanf("%s",pass);
    if (strcmp(pass,password)==0){
	    printf("\n\nPassword Match!\nLOADING");
		for(i=0;i<=6;i++)
    	{ 
            fordelay(100000000);
            printf(".");
        } 
        system("cls");
        menu();
	}
    else{
	printf("\n\nWrong Password");
 }
} 
