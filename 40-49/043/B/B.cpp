#include <iostream>
#include <deque>
#include <string>
using  namespace std;

int main(){
  string input ;

  cin >> input;

  deque<char> words;
  for(int i = 0 ; i < input.size(); i++){
    if(input[i] == 'B'){
      if( !words.empty() ) words.pop_back();
    }else{
      words.push_back(input[i]);
    }
  }

  while(!words.empty()){
    cout <<  words.front() ;
    words.pop_front();
  }
  cout << endl;
  return 0;
}
