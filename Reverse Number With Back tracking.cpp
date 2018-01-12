#include <iostream>
using namespace std;
int reverse(int,int &);
int main(){
	int a,b=1;
	cin>>a;
	a=reverse(a,b);
	cout<<a;
	return 0;
}
int reverse(int num,int &count){
    int a;
    if(num>9){
    a=reverse(num/10,count);
    num=(num%10)*count+a;}
    count*=10;
    return num;
}
