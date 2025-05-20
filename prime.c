
#include <stdio.h>
#include<math.h>
void primenumber(int n)
{
    int flag=0;
    for(int i=2; i<=n-1;i++){
    if(n%i==0)
        flag=1;
        break;
    }
if(flag == 0 && n > 1)
{
    printf("\n Its prime number");
}

else
printf("\n not no a prime number");
}
int main()
{
    primenumber(8);
    primenumber(45);
}


