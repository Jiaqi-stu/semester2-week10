
#include <stdio.h>
#include <string.h>

int main( void ) {

    char buffer[100] = "the quick brown fox jumped over the lazy dog";   // define a string to process

    // call strtok() repeatedly to tokenise the string on whitespace " "
    // print out each token 
    char* token; //来存每个切出来的单词

    // 第一次调用传入源字符串
    token = strtok(buffer, " ");

    // 一直循环直到字符串被吃完
    while (token != NULL){
        printf("%s\n",token);  //打印当前token
        token=strtok(NULL," ");  //后续调用传NULL
    }


    return 0;
}