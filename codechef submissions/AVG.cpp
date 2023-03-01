#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n=0;
    cin>>n;
    while (n--){
        int N=0,K=0,V=0;
        cin>>N>>K>>V;
        int total = 0;
        for (int i = N; i > 0; i--)
        {
            /* code */
            int temp = 0;
            cin >> temp;
            total += temp;
        }
        int sumK = V*(N+K)-total;
        int output = (sumK%K==0 && sumK>0)?(sumk/k):-1;
        cout<<output;
    }
	return 0;
}