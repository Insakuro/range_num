#include "Header.h"

Number::Number(){
	_count = 20;
}

Number::Number(int n){
	while (n > 50 || n < 20){
		std::cin >> n;
	}
	_count = n;
}

int Number::getCount(){
	return _count;
}

int Number::sum(int* arr) {
	int sum = 0;
	for (int i{}; i < _count; ++i){
		sum += arr[i];
	}
	return sum;
}

float Number::average(int* arr){
	return (sum(arr) / _count);
}