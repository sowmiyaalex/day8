#include<stdio.h>
int main()
{
    int arr1[]={1,2,3,4};
    int arr2[]={4,5,6,7};
    int a1=(sizeof(arr1)/sizeof(arr1[0]));
    int a2=(sizeof(arr2)/sizeof(arr2[0]));
    int x=a1+a2;
    int result[x];
    int t;
    for(int i=0; i<a1; i++){ //insert elememt from aar1
    result[i]=arr1[i];
    }
    for(int i=0; i<a2;i++){ //insert elememt from aar2
        for(int i=0; i<x-1;i++)
        {printf("%d\n",result[i]);
        }
        
            for(int j=0; j<x-i-1;j++){
                if(result[j]>result[j+1]){
                    int t=result[j];
                     result[j]=result[j+1];
                     result[j+1]=t;
                }
            }
        }
        for(int i=0;i<x;i++){
            printf("\n%d ", result [i]);
        }
    return 0;
}