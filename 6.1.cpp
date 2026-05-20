#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int const n=100;

char cezar(char l, int k){
	if(l+k>90)
		return l+k-26;
	else
		return l+k;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/dane_6_1.txt");
	string A[n];
	string a="", b="";
	char l=0;
	int i=0, j=0, k=107;
	k=k%26;

	for(i=0; i<n; i++){
		we>>A[i];
		//cout<<A[i]<<endl;
	}

	for(i=0; i<n; i++){
		a=A[i];
		b="";
		for(j=0; j<a.size(); j++){
			l=a[j];
			b+=cezar(l, k);
		}
		cout<<b<<endl;
	}
	
	

	return 0;
}

