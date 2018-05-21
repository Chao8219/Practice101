#include<iostream>
#include<fstream>
using namespace std;

inline int PrimeCal(int& a){
	for(int i=2;i<a;i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	ofstream myfile;
	myfile.open ("PrimeNumber.txt",ofstream::out|ofstream::trunc);
	myfile << 2 << endl;
	cout<<2<<endl;
	for(int t=3;t<=1e3;t++){
		if(PrimeCal(t)){
			cout<<t<<endl;
			myfile << t << endl;
		}
	}
	myfile.close();
	return 0;
}
