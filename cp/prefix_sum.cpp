// precompute prefix sum array     -> O(N)
// subsequent sum of any sub array -> O(1)

/*
	arr[N]
	prefix_sum[N+1] // 0th index is 0
	
	prefix_sum[i] = prefix_sum[i-1] + arr[i-1]
	let subarray be [a .. b]
	sum = prefix_sum[b+1] - prefix_sum[a]
*/

#include <iostream>

int main(){
	// sample array
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};

	// prefix sum array
	int prefix_sum[11];

	// 0th index is always set to 0
	prefix_sum[0] = 0;

	// init prefix_sum array
	for (int i = 1; i < 11; ++i) {
		prefix_sum[i] = prefix_sum[i-1] + arr[i-1];
	}


	// sample a and b
	int a = 3;
	int b = 5;

	// sum of subarray
	int sum = prefix_sum[b+1] - prefix_sum[a];

	std::cout << sum;

	return 0;
}




