#include <iostream>
#include<algorithm>>
using namespace std;
void multiply(int n);
#define max 500
int result=1,result_size=1;
int digit[max];
void factorial_large(int n)
{

    result=1;
    result_size=1;
    digit[0]=result;
    for(int i=2;i<=n;i++)
    {
        multiply(i);
    }
    reverse(digit,digit+result_size);
    for(int i=0;i<result_size;i++)
        cout << digit[i];
    cout << endl;
}
void multiply(int n)
{
    int carry = 0;
    for(int i=0;i<result_size;i++)
    {
        result = carry + n*digit[i];
        carry = result/10;
        digit[i] = result%10;
    }
    while(carry)
        {
            result_size++;
            digit[result_size-1] = carry%10;
            carry = carry/10;
        }
}
int main()
{
    factorial_large(200);
    return 0;
}
