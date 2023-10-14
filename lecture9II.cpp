#include <iostream>
using namespace std;

// int sum(int a, int b){
//     int c= a+b;
//     a=10;
//     b=11;
//     return c;
// }
int sum(int , int);

int main(){

    int a,b,c;
    a=3;
    b=5;
    c=sum(a,b);
    cout << a << " " << b << endl;
    cout << c << endl;
    cout << a << " " << b << endl;
    
    return 0;
}
int sum(int a,int b){
    return a+b;
}
