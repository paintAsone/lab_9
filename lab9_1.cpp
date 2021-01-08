#include<iostream>
using namespace std;

int main(){
	char grade[5] = {'A','B','C','D','F'};
	char input_grade;
	int i = 1,A=0,B=0,C=0,D=0,F=0;
	cout<<"Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout<<"Student ["<<i<<"]: ";
		cin>>input_grade;
		if(input_grade == grade[0]){
			A++;
		}else if(input_grade == grade[1]){
			B++;
		}else if(input_grade == grade[2]){
			C++;
		}else if(input_grade == grade[3]){
			D++;
		}else if(input_grade == grade[4]){
			F++;
		}
		else if(input_grade == '0'){
			break;
		}
		else{
			cout<<"Wrong input. Please input again.\n"; continue;
		}
		i++;
	}while(input_grade != '0');
	cout<<"In total "<<i-1<<" students.\n";
	cout<<"A = "<<A<<", ";
	cout<<"B = "<<B<<", ";
	cout<<"C = "<<C<<", ";
	cout<<"D = "<<D<<", ";
	cout<<"F = "<<F;
}