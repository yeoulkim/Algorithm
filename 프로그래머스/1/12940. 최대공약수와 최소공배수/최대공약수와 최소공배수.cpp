#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) 
{
    // 최대공약수 구하기
    // 일단 최대공약수를 1로 시작
    int gcd = 1;
    
    // n, m 중 작은 값 구하기
    int minValue = (n < m) ? n : m;  
    // 1 ~ 작은 수까지 돌면서 공약수 찾기
    for (int i = 1; i <= minValue; i++)
    {
        // a랑 둘 다 나눠지면
        if (n % i == 0 && m % i == 0)   
        {
            gcd = i;
        }
    }
    
    // 최소공배수 구하기
    // 최소공배수 = (a * b) / 최대공약수
    int lcm = (n * m) / gcd;
    
    return {gcd, lcm};  // vector로 묶어서 리턴
}