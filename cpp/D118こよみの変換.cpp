#include <iostream>
using namespace std;
int main(void){
  int n,y;
  char token1;
  cin >> token1 >> n;
  if(token1 == 'S'){
    y = n + 1925;
  }else{
    y = n + 1988;
  }
  cout << y;
  return 0;
}