#include <cstdio>
using namespace std;

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int maxMod = 1;
	if(n == 1){
		printf("%d\n",m);
		return 0;
	}
	for(int mod = 2; mod <= m ; mod++){
		int x = m - mod * (n-1);
		if( x >= mod){
			if(x % mod == 0) maxMod = mod;
		}else break;
	}
	printf("%d\n",maxMod);
  return 0;
}
