#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void){

    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<string> v(n);
    string buf;
    int ball = 0;
    int strike = 0;

    for(int i=0;i<n;i++){
        cin >> buf;
        v.push_back(buf);
        if(ball == 3){
            if(buf == "ball"){
                cout << "fourball!\n";
                break;
            }
        }
        if(strike == 2){
            if(buf == "strike"){
                cout << "out!\n";
                break;
            }
        }
        if(buf == "ball"){
            ball++;
            cout << "ball!\n";
        }
        if(buf == "strike"){
            strike++;
            cout << "strike!\n";
        }
    }

    return 0;
}