/* Write a program to print the alphabets from A-Z in reverse */
#include<stdio.h>
int main(){
    int ch;
    for(ch=90;ch>=65;ch--){
        printf("%c ",ch);
    }
    return 0;
}
