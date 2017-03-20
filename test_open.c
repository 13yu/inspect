#include <stdio.h>

int main()
{
    int fd = open("/root/aaa.py", "r");
    printf("%d", fd);
}
