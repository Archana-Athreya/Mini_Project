#ifndef BANK_H
#define BANK_H
typedef struct customer
{
    int account_no;
    char name[80];
    int balance;
	
} customer ;
void account(struct customer[], int);
void display(struct customer[], int);
int search(struct customer[], int, int);
void deposit(struct customer[], int, int, int);
void withdraw(struct customer[], int, int, int);
int check(char *pass,char *password);

#endif 
