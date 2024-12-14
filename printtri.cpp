#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  for(int i=0;i<n-1;i++){
    for(int j=n-i-1;j>0;j--) printf(".");
    printf("*");
    if(i>0){
      for(int j=0;j<i*2-1;j++) printf(".");
      printf("*");
    }
    printf("\n");
  }
  for(int i=0;i<n*2-1;i++) printf("*");
}
