
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Data definitions (part a.)
// Define an enumeration and typedef to `Type`
// Define a union and typedef to `Value`
// Define a struct, inckuding `Type` and `Value` and typedef to `Variable`

// Function prototypes (part b.)
// void print( Variable var ); 
// Variable assign( Type t, Value v );
// Variable add( Variable var1, Variable var2 );

#define MAX_LENGTH 99
    
typedef enum _type{
    INTEGER,
    REAL,
    STRING
}Type;

typedef union _value{
    int ival;
    float fval;
    char sval[MAX_LENGTH + 1];
}Value;

typedef struct _variable{
    Type type;
    Value value;
} Variable;


void print(Variable var){
    switch (var.type){
        case INTEGER:
        printf("INteger:%d\n",var.value.ival);
        break;

        case REAL:
        printf("Real:%.2f\n",var.value.fval);
        break;

        case STRING:
        printf("String:%s\n",var.value.sval);
        break;

        default:
        printf("Unknow type\n");
        break;
    }
}

int main( void ) {

    // define and initialise Variable, eg. 
    //Variable var1 = { .type=INTEGER, .value.ivalue=2 };
    
    return 0;
}