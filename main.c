#include <stdio.h>
#include <stdlib.h>
void ToH(int n, char source, char dest, char temp){
if(n>1){
    ToH(n-1, source, temp, dest);
    printf("\n Move %d disc from %c to %c", n, source, dest);
    ToH(n-1, temp, dest, source);
}
else
    printf("\n Move %d disc from %c to %c", n, source, dest);
}
int main()
{
    int n;
    printf("\n read no of discs:");
    scanf("%d", &n);
    ToH(n, 'S','D','T');
    return 0;
}
