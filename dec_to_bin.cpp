#include<iostream>

using namespace std;
DecToBin(int decNum){
    int n = decNum;
    int pow = 1;
    int binNum = 0;

    while(n>0){
        int rem = n%2;
        binNum += rem * pow;
        n = n/2;
        pow = pow * 10;

    }
    cout<<"Binary of "<<decNum<<" = "<<binNum<<endl;
}
int main(){
    DecToBin(11);
    return 0;
}