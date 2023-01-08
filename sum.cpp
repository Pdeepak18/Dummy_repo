#include<iostream>
using namespace std;


int sub(int a,int b){
   return b>a ?  (b-a) :  (a-b) ;

}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<sub(a,b)<<endl;
    cout<<a+b;
}