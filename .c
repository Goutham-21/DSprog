#include<stdio.h>
int main(){
for(int i=7;i<=100;i++){
if((i%4)==0 && (i%5)==4 && (i%6)==4){
printf("%d",i);
}
}
return 0;
}
