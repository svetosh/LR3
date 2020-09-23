#include <iostream>
#include <experimental/random>
#include <string>

int main ()
{
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (int i = 0; i<10; ++i){
	arr[i]= std::experimental::randint(-10,10);
	std::cout << arr[i] << " ";
}
 std::cout << std::endl;
	
	int wox=0;
	for(int i=0; i<10; ++i)
	{
		std::cout << static_cast<double>(arr[1]*arr[1])+(arr[2]*arr[2])+(arr[5]*arr[5]) << " ";
		wox+=arr[i];
	return 0;
}
	std::cout << static_cast<double>(arr[1]*arr[1])+(arr[2]*arr[2])+(arr[5]*arr[5]);
}
