// Final Project

#include <stdio.h>
#include<windows.h>
#include<time.h>

int main() {
    // Entering the ATM PIN 
    int pin=0000,option,enteredPin,count=0,amount=1;
    // Entering initial balance
    float balance = 500;
    int continueTransaction = 1;
    
    // Adding the date, month, hour and year to the output
    time_t now;
    time(&now);
    // Moving it to the center so it looks neat
    printf("\n");
    printf("\t\t\t\t\t       %s",ctime(&now));
    printf("\n\t\t\t==================== Welcome to Digi Bank ATM ====================");
    
    while(pin !=enteredPin){
        printf("\nPlease enter your PIN : ");
        scanf("%d", &enteredPin);
        if(enteredPin != pin){
            // Adding beep sound
            Beep(610,500);
            printf("Invalid PIN. Please try again!");
        }
        count++;
        // The program will end within 3 invalin PIN inputs
        if(count == 3 && pin != enteredPin){
            exit(0);
        }
    }
    while(continueTransaction != 0){
	
        printf("\n\t\t\t==================== Available Transactions ====================");
        printf("\n\n\t\t1. Money Withdrawal");
        printf("\n\t\t2. Deposit");
        printf("\n\t\t3. Balance Info");
        printf("\n\n\tPlease select the option : ");
        scanf("%d",&option);
        switch(option){
            // Designing the withdrawal
            case 1:
                while(amount % 500 != 0){
                    printf("\n\t\tEnter the amount : ");
                    scanf("%d",&amount);
                    // If the withdrawal amount isnt a multiple of 500
                    if(amount % 500 !=0)
                    printf("\n\t The amount should be multiple of 500");
                }
                // If the balance is not sufficient
                if(balance < amount){
                    printf("\n\t Insufficient balance.");
                    amount = 1;
                    break;
                }
                else {
                    //  Reducing the amount of money withdrawn from the balance
                    balance -= amount;
                    printf("\n\t\tYou have withdrawn Rs.%d. Your new balance is %.2f",amount, balance);
                    amount=1;
                    break;
                }
            case 2:
            // Designing the deposit
                printf("\n\t\t Please enter the amount : ");
                scanf("%d",&amount);
                balance +=amount;
                printf("\n\t\tYou have deposited Rs.%d. Your new balance is %.2f",amount,balance);
                printf("\n\t\t==================== Thank you for banking with Digi Bank! ====================");
                amount =1 ;
                break;
                
            case 3:
            // Designing the balance checking
                printf("\n\t\tYour balance is Rs.%.2f",balance);
                break;
                
            default:
                Beep(610,500);
                printf("\n\t\tInvalid option.");
                
        }
        printf("\n\t\tDo you wish to perform another transaction? Press 1[Yes], 0[No}");
        scanf("%d",&continueTransaction);
    }
        return 0;
    } 
