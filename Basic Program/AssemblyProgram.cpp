#include<iostream>
#include "windows.h"

void main() {
    int a = 10;
    int b = 20;
    int c;

    asm {
        mov ax,a  
        mov bx,b  
        add ax,bx  
        mov c,ax  
    }
    std::cout << "c = "<<c<< std::endl;
}