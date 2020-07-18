#include <iostream>
#include <string>

using namespace std;

int fibonacci(int x);

int main() {
	
	int valor = 20;

	for(int i = 0; i < valor; i++){
		cout << fibonacci(i + 1) << " ";
	}
	return 0;
}

int fibonacci(int x){
	if(x == 1 || x == 2){
		return 1;
	} else {
		return fibonacci(x-1)+fibonacci(x-2);
	}
}


