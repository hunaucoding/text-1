#include<iostream>
using namespace std;
int max(int a,int b){
	if(a==b) throw 1;
	return (a>b?a:b);
}
void f(){
	int i,j;
	try{
		cout<<"��������������ͬ������"<<endl;
		cin>>i>>j;
		int y =max(i,j);
		cout<<"i,j�нϴ���Ϊ��"<<y<<endl; 
	} 
	catch(int){
		cout<<"������������ͬ������������"<<endl;
		cin>>i>>j;
		int y= max(i,j);
		cout<<"i,j�нϴ���Ϊ��"<<y<<endl; 
	}
}
int main(){
	try{
		f();
	}
	catch(int){
		cout<<"���������б�����"; 
	}
	return 0; 
}
