#include <bits\stdc++.h>
using namespace std;
vector<int>GenerarVector(vector<int>A);
vector<int>NumerosPares(vector<int>A,vector<int>B);
void MostrarVector(vector<int>A,vector<int>B);
int main(){
	vector<int>A;
	vector<int>B;
	A=GenerarVector(A);
	B=NumerosPares(A,B);
	cout<<"Vector A:";
	MostrarVector(A,B);

	return 0;
}
vector<int>GenerarVector(vector<int>A){
	srand(time(NULL));
	int e;
	for(int i=0;i<10;i++){
		e=rand()%100;
     	A.push_back(e);
	}
	return A;
}
vector<int>NumerosPares(vector<int>A,vector<int>B){
	for(int i=0;i<A.size();i++){
		if(A[i]%2==0){
			B.push_back(A[i]);
		}
	}
	return B;
}
void MostrarVector(vector<int>A,vector<int>B){
	for(int i=0;i<A.size();i++){
		cout<<A[i]<<"/";
	}
	cout<<endl;
	cout<<"Vector B:";
	for(int i=0;i<B.size();i++){
		cout<<B[i]<<"/";
	}
	cout<<endl;
}