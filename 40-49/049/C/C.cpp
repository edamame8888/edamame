#include <iostream>
#include <string>
using namespace std;

int main(){
  string T;
  cin >> T;
  while(T != ""){
    if(T.length() < 5){
      cout << "NO" << endl;
      return 0;
    }else if(T.substr(T.size() - 5) == "dream"){
      T = T.substr(0,T.length() - 5);
    }else if(T.substr(T.size() - 5) == "erase"){
      T = T.substr(0,T.length() - 5);
    }else if(T.substr(T.size() - 6) == "eraser"){
      T = T.substr(0,T.length() - 6);
    }else if(T.substr(T.size() - 7) == "dreamer"){
      T = T.substr(0,T.length() - 7);
    }else{
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}
