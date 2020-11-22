#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
  int T;
  while(scanf("%d", &T) != EOF){
    for(int j = 1 ; j<= T ; ++j){
      int n;
      scanf("%d", &n);

      vector<int> in(n, 0);
      int pos = 0;
      for(int i = 0 ; i < n ; ++i){
        string in;
        cin >> in;
        if(in == "LEFT"){
          in[i] = -1;
          --pos;
        }
        else if(in == "RIGHT"){
          in[i] = 1;
          ++pos;
        }
        else{
          cin >> in;
          int index;
          scanf("%d", &index);
          pos += in[i] = in[index-1];
        }
      }
      printf("%d\n", pos);
    }
  }
  return 0;
}
