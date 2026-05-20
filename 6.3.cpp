#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int const n=3000;

bool zanjdz_klucz(string a, string b){
	int i=0;
	char k=0, n_k=0;
	k=(a[0]-b[0]+26)%26;
	
	for(i=1; i<a.size(); i++){
		n_k=(a[i]-b[i]+26)%26;
		if(n_k!=k) return 0;
	}
	
	return 1;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/dane_6_3.txt");
	string A[n], B[n];
	int i=0;

	for(i=0; i<n; i++){
		we>>A[i]>>B[i];
	}
	
	for(i=0; i<n; i++){
		if(!zanjdz_klucz(A[i], B[i])){
			cout<<A[i]<<endl;
		}		
	}
	
	return 0;
}

