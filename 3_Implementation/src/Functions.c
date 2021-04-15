#include <stdio.h>
#include <string.h>
#include "bank.h"
//This Function is to check password
int check(char *pass,char *password)
{
	
	 int c=strcmp(pass,password);
	 return c;
		
}
//This Function is to add customer account details	
void account( customer list[80], int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        int duplicate;
		printf("\nEnter data for Record #%d", i + 1);
		reenter:
		printf("\nEnter account_no : ");
        scanf("%d", &list[i].account_no);
	   
		for(int j=0;j<i;j++)
		{
			if(list[i].account_no==list[j].account_no)
			{
				printf("Account Number is already taken\n");
				duplicate=1;
				goto reenter;
			
			}
		}
		if(!duplicate)
			i++;
		fseek(stdin,0,SEEK_END);
		
        printf("Enter name :");
        fgets(list[i].name,20,stdin);
        list[i].balance = 0;
		
    } 
}
// This Function is to display account information
void display( customer list[80], int s)
{
    int i;

    printf("\n\nA/c No\t\tName\t\tBalance\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\t\t%s\t\t%d\n", list[i].account_no, list[i].name,
            list[i].balance);
    } 
}
//This function is to search for an account using account number
int search(customer list[80], int s, int number)
{
    int i;

    for (i = 0; i < s; i++)
    {
        if (list[i].account_no == number)
        {
            return i;
        } 
    }
    return  - 1;
}
//This function is used to deposit cash as per the customer requirement
void deposit( customer list[], int s, int number, int amt)
{
    int i = search(list, s, number);
    if (i ==  - 1)
    {
        printf("Record not found");
    } 
    else
    {
        list[i].balance += amt;
    }
}
// This function is used to withdraw cash as per the customer requirement
void withdraw( customer list[], int s, int number, int amt)
{
    int i = search(list, s, number);
    if (i ==  - 1)
    {
        printf("Record not found\n");
    } 
    else if (list[i].balance < amt)
    {
        printf("Insufficient balance\n");
    }
    else
    {
        list[i].balance -= amt;
    } 
}

