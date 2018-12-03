#include <stdio.h>
int length(int x, int y){
  if(x>=y) return x-y;
  else return y-x;
}
int main(){
  int a,b,c,d;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  if(length(a,c) <= d) printf("Yes\n");
  else if(length(a,b) <= d && length(b,c) <= d) printf("Yes\n");
  else printf("No\n");
  return 0;
}
