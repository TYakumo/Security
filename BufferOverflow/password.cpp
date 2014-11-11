/*
    Buffer Overflow Example
*/

#include <cstring>
#include <cstdio>
#include <cstdlib>

bool IsPasswordOkay()
{
    char Password[12];
    gets(Password);
    puts("Go Go Power Ranger");
    if( !strcmp(Password, "goodpass") )
        return true;
    return false;
}

int main()
{
    bool PwStatus;
    puts("Enter password");
    PwStatus = IsPasswordOkay();

    if(PwStatus == false)
    {
        puts("Access denied");
        exit(-1);
    }
    else puts("Access granted");
    return 0;
}
