#include <iostream>
#include <vector>
using namespace std;

int n;

vector<long long> v;
vector<long long> arr;
long long maxVal = 0;
void func(int cnt,long long sum, int idx){
    if(cnt==3){
        int a = 0;
        for(int i=0;i<v.size();i++){
            a ^= v[i];
        }
        if(a!=sum) return;
        if(maxVal < sum) {
            maxVal = sum;
            return;
        }
    }
    for(int i=idx;i<=n;i++){
        v.push_back(arr[i]);
        func(cnt+1, sum+arr[i], i+1);
        v.pop_back();
        func(cnt, sum, i+1);
    }
}

int main(){
    cin>>n;

    for(int i=0;i<n;i++){
        long long temp;
        cin>>temp;
        arr.push_back(temp);
    }
    func(0, 0, 0);

    cout<<maxVal;
}