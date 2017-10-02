#include <iostream>
#include <fstream>
#include<string>
using namespace std;

short sum;
short SumOfNumbers(short n) {
	if (n > 1)
	{
		sum = n*(n + 1) / 2;
		return sum;
	}
	return 1;
}


float factorialFloat(long n)

{
	float product = 1;
	long i = 1;
	while (i <= n)
	{
		product = product * i;
		i++;
	}
	return product;

}

double factorialDouble(long n)

{	double product = 1;
	long i = 1;

	while (i <= n)	{
		product = product * i;
		i++;
	}
	return product;
}

float f0(int n)

{
	float sum = 0;
	float i = 1;
	while (i <= n){
		float one_over_n = 1 / (float)n;
	sum = sum + one_over_n;
		i++;
	}
	return sum - 1;
}

double f1(int n)

{
	double sum = 0;
	double i = 1;

	while (i <= n){

		double one_over_n = (1 / (double)n);
		sum = sum + one_over_n;
		i++;
	}
	return sum - 1;
}




//for (float i = 3.4; i< 4.4; i += 0.2)

//{
//	cout << "i = " << i << endl;
//}

//Answer 7: We see the loop printing 4.4 here, because when we declare float i = 3.4, we are assigning a double to a float data type.

//Since, the computer cannot store the decimal exactly in binary, there are some approximations. When i set precision to

//18, we see that the last decimal is 4.399999618530273438 instead of 4.4. As a result the loop prints 4.4.

//for (double i = 3.4; i<4.4; i += 0.2)

//{
//	cout << "i = " << i << endl;
//}

//Answer 8: Since the data type double has takes up more memory it is able to store the value with more accuracy, and precision. Therefore,

//the value of it in binary is more closer to the actual value than when it was stored in float.

//Since 4.4 is stored as 4.400000000000000355 which is greater than 4.4, 4.4 was not printed out.



int main() {
	short number;
	cout << "enter an integer greater than 1"<<endl;
	cin >> number;
	SumOfNumbers(number);
	cout << "The sum of the first " << number << " numbers is: " << sum << endl;
	//Answer 1: The n value is 255 and the sum is 32,640.	
	//Answer 2: The overflow error occurs at 256 number for short. The overflow is detected when the sum is negative.
	
	//Answer 3: The n  value is 9,594,478 and the sum is 2,139,299,545.The overflow is detected when the sum is negative.
	//The overflow error occurs at 9,594,479 for long

	//Answer 4: The overflow is detected when the product returns 'inf'.
	// The overflow is caused by value of 35

	//Answer 5: In this case too, the overflow is detected when the product returned is 'inf'.
	// The overflow is caused by value of 171

	//Answer 6
	// When the ratio is stored in float, the value of the function is zero till 9. Once n equals 10, the value is no more zero.
	// This is because as the n value increases, the number of copies added increases. This in turn adds up the error in all the copies
	// until it is no more closest to zero.
	

}