#include<iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    string s,s1;
    while(cin>>s&&s!="0"){
        int res=0,buf=0;
        s1=s;
        if(s!="9"){
            while(s.size()!=1){
                for(const char&it:s){
                    buf+=it-'0';
                }
                s=to_string(buf);
                buf=0;
                res++;
            }
        }
        else res=1;
        cout<<s1<<(s[0]=='9'?" is a multiple of 9 and has 9-degree "+to_string(res)+".":" is not a multiple of 9.")<<endl;
    }
    return 0;
}
// 題目：判斷這個數的總和除以 9，直到剩一位數，計算運算次數
// 999999999999999999999 -> 999 -> 27 -> 9
// 3
//
// 9
// 1