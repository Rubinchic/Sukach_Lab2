#include <iostream>
using namespace std;

int calculate(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
};

int main(){
    int num1, num2;
    cout << "Write 2 nums: ";
    cin >> num1 >> num2;

    int sum1 = calculate(num1);
    int sum2 = calculate(num2);
    
    if (sum1 == num2 && sum2 == num1) {
        cout << num1 << " and " << num2 << " druzhni" << "\n";
    } 
    else {
        cout << num1 << " and " << num2 << " ne druzhni" << "\n";
    }
    return 0;
}