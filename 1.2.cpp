#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int i=0, a=140, b=0, suma_a=1, suma_b=1;
	
	for(i=2; i<a/2+1; i++){
		if(a%i==0)
			suma_a+=i;
	}
	
	b=suma_a-1;
	for(i=2; i<b/2+1; i++){
		if(b%i==0)
			suma_b+=i;
	}
	
	if(b==suma_a-1 && a==suma_b-1)
		cout<<b;
	else
		cout<<"NIE";
	
	return 0;
}
