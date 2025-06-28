//  Enum for Error Codes 
// Define an enumeration ErrorCode with members SUCCESS = 0, FILE_NOT_FOUND = 1, 
// PERMISSION_DENIED = 2, INVALID_INPUT = 3. Write a C program that simulates a 
// function returning an error code. In main(), call this function and use the ErrorCode enum to 
// interpret and print the result.


#include<stdio.h>

enum error_code{
    SUCCESS = 0,
    FILE_NOT_FOUND = 1, 
    PERMISSION_DENIED = 2,
    INVALID_INPUT = 3
};

enum error_code performOperation(int opertion_type){
    if (opertion_type == 0)
    {
        return SUCCESS;
    }
    else if (opertion_type == 1)
    {
        return FILE_NOT_FOUND;
    }
    else if (opertion_type == 2)
    {
        return PERMISSION_DENIED;
    }
    else if (opertion_type == 3)
    {
        return INVALID_INPUT;
    }
    
}

int main(){
    enum error_code result;

    result = SUCCESS;

    switch (result) { 
    case SUCCESS: 
    printf("Success (should not happen here).\n"); 
    break; 
    case FILE_NOT_FOUND: 
    printf("File Not Found.\n"); 
    break; 
    case PERMISSION_DENIED: 
    printf("Permission Denied.\n"); 
    break; 
    case INVALID_INPUT: 
    printf("Invalid Input.\n"); 
    break; 
    default: 
    printf("Unknown Error.\n"); 
    break; 
    }
    return 0;
}