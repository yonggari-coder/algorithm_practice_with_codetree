#include <iostream>

using namespace std;

int q;
string s;
int x = 0;
int main(){
    cin>>q;
    while(q--){
        cin>>s;

        if(s=="add"){
            int temp;
            cin>>temp;

            x |= (1<<temp);

        }
        else if(s=="delete") {
            int temp;
            cin>>temp;

            if( (x >> temp) & 1) {
                x^=(1<<temp);
            }
        }
        else if(s=="print") {
            int temp;
            cin>>temp;
            
            if((x>>temp)&1) {
                cout<<"1"<<"\n";
            }
            else cout<<"0"<<"\n";
        }
        else if(s=="toggle"){
            int temp;
            cin>>temp;

            x^=(1<<temp);
        }
        else if(s=="clear"){
            x = 0;
        }
    }
}