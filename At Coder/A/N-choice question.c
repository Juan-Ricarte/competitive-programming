#include <stdio.h>

int main()
{
    int A,B,Ci,N,SOMA,result=0;
    
    scanf("%d %d %d",&N,& A, &B);
    SOMA=A+B;
    
    for(int i=1; i<=N; i++){
        scanf("%d",&Ci);
        if(Ci==SOMA){
            result= i;
        }
    }
    
    printf("%d",result);
    
}
