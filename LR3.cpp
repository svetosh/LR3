#include <iostream>
#include <experimental/random>
#include <string>
#include <cstdlib>
#include <ctime>

int main ()
{
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (int i = 0; i<10; ++i){
	arr[i]= std::experimental::randint(-10,10);
	std::cout << arr[i] << " ";
}
 std::cout << std::endl;
	
	int wox=0;
	for(int i=0; i<19; ++i)
	{
		std::cout << static_cast<double>(arr[1]*arr[1])+(arr[2]*arr[2])+(arr[5]*arr[5]) << " ";
		wox+=arr[i];
	return 0;
}
	std::cout << static_cast<double>(arr[1]*arr[1])+(arr[2]*arr[2])+(arr[5]*arr[5]);
	////
		int n=0;
	std::cout << "n=";
	std::cin >> n;
	
	int* darr = new int [n];
	
	for (int i=0; i<n; i++){
		std::cout << "введите " << i << " элемент: ";
		std::cin >> darr[i];
	}
		for (int i=0; i<n; i++){
        std::cout << i << " Элемент " << darr[i] << std::endl;
		}
		
		for (int i=0; i<n; i++){
		if (darr[i]%2==0){
			darr[i]*=10;
	}
	std::cout << i << " Элементы " << darr[i] << std::endl;
	}
	
	int k1=0, k2=0, summ=0;
	std::cin >> k1 >> k2;
	if (k1<=k2){
        for (int i=k1;i<=k2;i++){
            summ+=arr[i];
            }
        }
    std::cout << summ;

    delete[] darr;
    ////
    	int m=0;
    int a=0;
    std::cout << "Введите длину массива" << std::endl;
    std::cin >> m;
    
    std::vector<int> vec1;
    for (int i = 0; i < m; ++i) {
        std::cin >> a;
        vec1.insert(vec1.end(), a);
    }
    for (int i = 0; i < m; ++i) std::cout << vec1[i] << " ";
    std::cout << std::endl;
    vec1.insert(vec1.end(), 25); 
    for (int i = 0; i < vec1.size(); ++i) std::cout << vec1[i] << " ";
    std::cout << std::endl;
    int sum = 0;
    for (int i = 0; i < vec1.size(); ++i) sum += vec1[i];
    std::cout << "Cумма вектора равна " << sum << std::endl;
    int nomer = -1;   
    for (int i = 0; i < vec1.size(); ++i) {
        if (vec1[i] >= 6) {
            nomer = i;
            break;
        }
    }
    if (nomer != -1) vec1.erase(vec1.begin()+nomer);
    for (int i = 0; i < vec1.size(); ++i) std::cout << vec1[i] << " ";
    std::cout << std::endl;
    ////
    
}
