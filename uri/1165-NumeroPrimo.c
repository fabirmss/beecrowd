#include <stdio.h>

int main(){

   int N,x,y,w,z; 

   scanf("%d",&N);
   for(z=1;z<=N;z++){ 
   y=0;
   scanf("%d",&x); 
   for(w=1;w<=x;w++){
   if(x%w==0){ 
   y++;
     }
    }
  if(y==2){
printf("%d eh primo\n",x);}
else{ 
printf("%d nao eh primo\n",x);}
   }
return 0;
}
