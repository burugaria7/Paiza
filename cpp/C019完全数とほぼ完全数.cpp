#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

std::vector<int> enum_div(int n)//nの約数を列挙
{
	std::vector<int> ret;
	for(int i=1 ; i*i<=n ; ++i)
	{
		if(n%i == 0)
		{
			ret.push_back(i);
			if(i!=1 && i*i!=n)
			{
				ret.push_back(n/i);
			}
		}
	}
	return ret;
}

int main(void){

    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> v;

    int buf;//入力値
    int s;//入力値の約数から入力値をひいたものを入れたい

    for(int i=0;i<n;i++){
        cin >> buf;
        s = 0;

        std::vector<int> r = enum_div(buf);
	    for(int i : r){
            //cout << i << endl;
            s += i;
        }

        //s -= buf;

        //cout << s;

        if(s == buf){
            cout << "perfect\n";
        }else if(buf-s==1||buf-s==-1){
            cout << "nearly\n";
        }else{
            cout << "neither\n";
        }
        
    }

    return 0;
}