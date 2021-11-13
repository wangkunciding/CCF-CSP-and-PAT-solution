#include <iostream>
using namespace std;
int h[1001];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>h[i];
    }
    int max = 0, a = 0;
    for(int i=1;i<=n;i++){
        int min = h[i];
        for(int j=i;j<=n;j++){
            if(h[j]<min) min = h[j];
            a = min * (j-i+1);
            if(a>max) max = a;
        }
    }
    cout<<max<<endl;
    return 0;
}
