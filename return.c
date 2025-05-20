

#include <stdio.h>
#include<math.h>
int add (){
    int x,y;
    scanf("%d %d",&x,&y);
    int sum=x+y;
    return sum;
  
}
int main()
{
    int x=add();
    printf("sum= %d",x);
    
    return 0;
} 
