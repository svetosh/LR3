#include <iostream>

int main(){
	int n=0;
	std::cout << "n=";
	std::cin >> n;
	
	int* arr = new int [n];
	
	for (int i=0; i<n; i++){
		std::cout << "введите " << i << " элемент: ";
		std::cin >> arr[i];
	}
		for (int i=0; i<n; i++){
        std::cout << i << " Элемент " << arr[i] << std::endl;
		}
		
		for (int i=0; i<n; i++){
		if (arr[i]%2==0){
			arr[i]*=10;
	}
	std::cout << i << " Элементы " << arr[i] << std::endl;
	}
	
	int k1=0, k2=0, summ=0;
	std::cin >> k1 >> k2;
	if (k1<=k2){
        for (int i=k1;i<=k2;i++){
            summ+=arr[i];
            }
        }
    std::cout << summ;

    delete[] arr;
}
	
