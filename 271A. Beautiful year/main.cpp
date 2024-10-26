#include<bits\stdc++.h>
using namespace std;

bool checkyear(int year){
    unordered_map<char,int>mp;
    string s = to_string(year);
    for(int i = 0; i < 4; i++){
        mp[s[i]]++;
        if(mp[s[i]] > 1){
            return false;
        }
    }
    return true;
}

int main(){
    int year;
    cin>>year;
    int y = year+1;
    while(true){
        if(checkyear(y)){
            cout<<y;
            break;
        }
        y++;
    }
    return 0;
}