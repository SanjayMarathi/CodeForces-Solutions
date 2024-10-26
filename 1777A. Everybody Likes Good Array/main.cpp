#include<bits\stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int prev;
        int operations = 0;
        int count = 0;
        for(int i = 0; i < n; i++){
            cin>>arr[i];
            if(i == 0){
                prev = arr[i] % 2;
                count = 1;
            }else{
                if(arr[i] % 2 == prev){
                   count++;
                }else{
                    operations += count - 1;
                    prev = arr[i] % 2;
                    count = 1;
                }
            }
        }
        operations += count-1;
        cout<<operations<<endl;  
    }
    return 0;
}