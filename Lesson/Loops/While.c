#include<stdio.h>

/* While(điều kiện lặp) {
    nội dung cần lặp
}  */

int main () {

    int user = 0;
    printf("The list of users ");

    while( user <= 20 ) {   
        printf("Num: %d\n", user);
        ++user;
    }

    return 0;
}