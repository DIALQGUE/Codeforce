#include <iostream>
using namespace std;

int main(){
    int i, j, round;
    string str;
    cin >> round;
    for(i = 0; i < round; i++){
        bool chk = true;
        cin >> str;
        int len = str.length();
        if(len % 2)
            chk = false;
        else {
            int step = len / 2;
            for(j = 0; j < step; j++) {
                if(str[j] != str[j + step]){
                    chk = false;
                    break;
                }
            }
        }
        if(chk)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
