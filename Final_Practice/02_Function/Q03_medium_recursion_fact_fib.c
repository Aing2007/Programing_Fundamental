/*
 * ==============================================================
 *  หัวข้อ    : Function
 *  ข้อที่    : 3    |    ระดับ : ปานกลาง
 *  ชื่อโจทย์ : Recursion: แฟกทอเรียลและฟีโบนักชี
 * ==============================================================
 *  [โจทย์]
 *    เขียนฟังก์ชันแบบเรียกตัวเอง (recursive) 2 ฟังก์ชัน
 *      long long fact(int n);   // n!
 *      int fib(int n);          // fib(0)=0, fib(1)=1, fib(n)=fib(n-1)+fib(n-2)
 *
 *  [Input]
 *    จำนวนเต็ม n (0 <= n <= 20)
 *
 *  [Output]
 *    2 บรรทัด: ค่า n! และ fib(n)
 *
 *  [Test case 1]
 *   Input:
 *      5
 *   Output:
 *      5! = 120
 *      fib(5) = 5
 *
 *  [Test case 2]
 *   Input:
 *      10
 *   Output:
 *      10! = 3628800
 *      fib(10) = 55
 *
 *  [Test case 3]
 *   Input:
 *      0
 *   Output:
 *      0! = 1
 *      fib(0) = 0
 *
 *  [ข้อกำหนด / คำใบ้]
 *    ทุกฟังก์ชัน recursive ต้องมี base case ; พิมพ์ long long ด้วย %lld
 *
 * ==============================================================
 */
#include <stdio.h>
long long fact(int);
int fibo(int);
int main(void)
{
    int num;
    scanf("%d", &num);
    printf("fact : %lld\n", fact(num));
    printf("fibo : %d", fibo(num - 1));
    return 0;
}
long long fact(int n)
{
    int Fac = 1;
    for (int i = 1; i <= n; i++)
    {
        Fac *= i;
    }
    return Fac;
}
int fibo(int n)
{
    int temp = 1;
    for (int i = 0; i <= n; i++)
    {
        temp += i;
    }
    return temp;
}
