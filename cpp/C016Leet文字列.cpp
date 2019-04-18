#include <iostream>
using namespace std;
int main(void){
  char token1[101];
  cin >> token1;
 for(int i = 0;;i++){
    switch (token1[i])
    {
      case 'A':
        token1[i] = '4';
        break;
      case 'E':
        token1[i] = '3';
        break;
      case 'G':
        token1[i] = '6';
        break;
      case 'I':
        token1[i] = '1';
        break;
      case 'O':
         token1[i] = '0';
         break;
      case 'S':
        token1[i] = '5';
        break;
      case 'Z':
        token1[i] = '2';
        break;
      default:
        break;
    }
    
    if(token1[i] == '\0'){
     break;
   }
   printf("%c", token1[i]);
 }
  return 0;
}