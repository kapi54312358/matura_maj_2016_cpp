#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int const n=3000;

char cezar(char l, int k){
	if(l-k<65)
		return l-k+26;
	else
		return l-k;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/dane_6_2.txt");
	string A[n];
	string a="", b="";
	char l=0;
	int i=0, j=0, k=0;
	int K[n];

	for(i=0; i<n; i++){
		we>>A[i]>>k;
		K[i]=k%26;
	}
	
	for(i=0; i<n; i++){
		a=A[i];
		b="";
		for(j=0; j<a.size(); j++){
			l=a[j];
			b+=cezar(l, K[i]);
		}
		if(b.size()>0){
			cout<<b<<endl;
		}	
	}

	return 0;
}

