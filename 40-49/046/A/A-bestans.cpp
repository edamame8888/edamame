#include <set>
#include <iostream>

using namespace std;

int main(){
/*
set<type> は<set> をinclude して使用する
s.insert() で追加可能
setは重複されているものは追加されない
s.size()で大きさを取得 
*/

  int a,b,c;
  set<int> s;
  cin >> a >> b >> c;
  s.insert(a);
  s.insert(b);
  s.insert(c);
  cout << s.size() << endl;

  return 0;
}
