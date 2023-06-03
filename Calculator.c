//LIBRARIES
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include <time.h>
    #include <unistd.h>


//Global Variables
    char symbol;
    int operator;
    int active = 1;
//OPERATION VARIABLES
    int numA;
    int numB;
    int res;
//Function list
   int addition();
    int subtraction();
    int division();
    int multiplication();
    void exitCalc();
    char selection(char symbol);

void main(){
   

    while (active){
    printf("Welcome to the Calculator\n");
    printf("Select an operation\n");
    printf(" + , - , *, .  or e to exit \n");


    scanf(" %c", &symbol );
    //int selection(char symbol);
   // test symbol printf("%c", symbol);

    operator = selection(symbol); 
switch(operator){
    case 1:
        printf("Input the two numbers you would like to add:\n");
        scanf("%d",&numA);
        scanf("%d",&numB);

        res = addition(numA, numB);

        printf("The result is %d\n", res);

        sleep(2);
        break;

    case 2:
        printf("Input the two numbers you would like to subtract:\n");
        scanf("%d",&numA);
        scanf("%d",&numB);

        res = subtraction(numA, numB);

        printf("The result is %d\n", res);
        sleep(2);
        break;

    case 3:
        printf("Input the two numbers you would like to multiply:\n");
        scanf("%d",&numA);
        scanf("%d",&numB);

        res = multiplication(numA, numB);

        printf("The result is %d\n", res);
        sleep(2);
    
        break;
    
    case 4:
        printf("Input the two numbers you would like to divide:\n");
        scanf("%d",&numA);
        scanf("%d",&numB);

        res = division(numA, numB);

        printf("The result is %d\n ", res);
        sleep(2);
        break;
     case 5:
        printf("Invalid input please try again\n\n\n");
        
        sleep(1);
        break;
    case 6:
        printf("Stopping Program.\n");
        sleep(1);
        printf("Stopping Program..\n");
        sleep(1);
        printf("Stopping Program...\n");
        sleep(1);
        active = 0;
        break;





}

    }
}

char selection(char symbol){
    if(symbol == '+'){
        operator = 1;
        

        }
    else if (symbol == '-')
        {
            operator = 2;
        }
    else if (symbol == '*')
        {
            operator = 3;
        }
    else if (symbol == '/')
        {
            operator = 4;
        }
    else if (symbol == 'e')
        {
            operator = 6;
        }
   /* else if (symbol == '\n')
        {
            operator = 0;
        }*/
    else{
        operator = 5;
    }
    return operator;

}
int addition(int numA,int numB){
    


    int result = numA + numB;
    return result;
}
int subtraction(int numA,int numB){
    int result = numA - numB;
    return result;   
}
int multiplication(int numA,int numB){
int result = numA * numB;
    return result; 


}
int division(int numA,int numB){
int result = numA / numB;
    return result; 


}
