//Linear search algorithm works for sorted elements only.
#include<stdio.h>
int main(){
  int key,a[5],i;
  printf("Enter the key\n");
  scanf("%d",&key);
  printf("Enter elements into an array\n");
  for(i=0;i<5;i++){
  scanf("%d",&a[i]);
  }
  for(i=0;i<5;i++){
  if(a[i]==key){
    printf("Found at %d location",i+1);
    break;
    }
 } 
 return 0;
 }
