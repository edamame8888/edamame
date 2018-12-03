#include <stdio.h>
#define rep(i,N) for(i=0;i<N;i++)

int main(){
  long n,x,i,j,prev,b,v;
  scanf("%ld",&n);
  int expo[n+1];
  rep(i,n+1) expo[i] = 0;
  expo[1] = 1;

  for(b=2;b<=n;b++){
    v = b*b;
    while(v<=n){
      expo[v] = 1;
      v *= b;
    }
  }

  //printf("hi");
  for(i=n ; i >= 1; i--){
    if(expo[i]){
    printf("%ld\n",i);
    break;
    }
  }

  return 0;
}
