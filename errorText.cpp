#include<iostream>
using namespace std;
int max(int a,int b){
	if(a==b) throw 1;
	return (a>b?a:b);
}
void f(){
	int i,j;
	try{
		cout<<"亲输入连个不相同的整数"<<endl;
		cin>>i>>j;
		int y =max(i,j);
		cout<<"i,j中较大者为："<<y<<endl; 
	} 
	catch(int){
		cout<<"两个数不能相同，请重新输入"<<endl;
		cin>>i>>j;
		int y= max(i,j);
		cout<<"i,j中较大者为："<<y<<endl; 
	}
}
int main(){
	try{
		f();
	}
	catch(int){
		cout<<"请重新运行本程序"; 
	}
	return 0; 
}
