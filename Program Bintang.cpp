#include <iostream>
using namespace std;
int main(){
	int i,x,y,z;
	
	cout<<"=========================================="<<endl;
	cout<<"||\t    PROGRAM BINTANG \t\t||"<<endl;
	cout<<"=========================================="<<endl;
	cout<<"|| NAMA	   : Mohammad Haikal Ramadan\t||"<<endl;
	cout<<"|| NIM 	   : 20170801058\t\t||"<<endl;
	cout<<"|| Jurusan : Teknik Informatika\t\t||"<<endl;
	cout<<"==========================================\n"<<endl;
	cout << "Input Banyak Bintang	: ";
	cin >> z;
	for(i=1;i<=z;i++){
		cout << endl;
		for(x=z;x>=i;x--){
			cout << "*" << " ";
		}
		for(y=1;y<=x;y++){
			cout <<"    ";
		}
		for(y=z;y>=i;y--){
			cout <<"*"<<" ";
		}
		for(x=1;x<=y;x++){
			cout <<"    ";
		}
	}
	for(i=1;i<=z;i++){
		cout << endl;
		for(x=1;x<=i;x++){
			cout <<"*"<<" ";
		}
		for(y=z;y>=x;y--){
			cout <<"  ";
		}
		for(y=z;y>=x;y--){
			cout <<"  ";
		}
		for(x=1;x<=i;x++){
			cout <<"*"<<" ";
		}
	}
	cout<<"\n\nThank You For Coming!:) \n";
}
