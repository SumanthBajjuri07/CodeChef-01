


#include<bits/stdc++.h>
using namespace std;
int max(int p,int q,int r,int s) {
    if((p>q)&&(p>r)&&(p>s)){
        return p;
    }
    else {
        if ((q>r) && (q>s)) {
            return q;
        }
        else {
            if (r>s) {
                return r;
            }
            else {
                return s;
            }
        }
    }
}
int main(){
    int test_cases;
    cin>>test_cases;
    int data1, data2, data3, data4, bag;
    while(test_cases--){
        cin>>data1>>data2>>data3>>data4;
        bag = max(data1,data2,data3,data4);
        if(data1+data2+data3<=bag){
            cout<<"1"<<endl;
        }
        else if(data1+data2<=bag){
            cout<<"2"<<endl;
        }
        else if(data1<=bag){
            cout<<"3"<<endl;
        }
    }
}
