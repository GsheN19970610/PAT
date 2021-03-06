/*
1001. A+B Format (20)
时间限制 400 ms
内存限制 65536 kB
代码长度限制 16000 B
Calculate a + b and output the sum in standard format -- that is, the digits must be 
separated into groups of three by commas (unless there are less than four digits).

Input
Each input file contains one test case. Each case contains a pair of integers a and b 
where -1000000 <= a, b <= 1000000. The numbers are separated by a space.

Output

For each test case, you should output the sum of a and b in one line. The sum must be 
written in the standard format.

Sample Input
-1000000 9

Sample Output
-999,991
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b;
    while(cin >> a >> b){
        int result = a+b;
        if(abs(result) >= 1000000){
            printf("%d,%03d,%03d\n",result/1000000,abs(result)%1000000/1000,abs(result)%1000);
        }else if(abs(result) >= 1000){
            printf("%d,%03d\n",result/1000,abs(result)%1000);
        }else{
            printf("%d\n",result);
        }
    }
    return 0;
}