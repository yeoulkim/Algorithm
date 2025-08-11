#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) 
{
    int count = 0;
    int lenT = t.size();
    int lenP = p.size();
    
    for (int i = 0; i + lenP <= lenT; i++)  // 마지막까지 포함
    {
        // string을 사용하면 앞자리 0 유지 가능, 정수 범위 초과도 안전하게 비교 가능
        string part = t.substr(i, lenP); // 부분문자열 자르기
        if (part <= p)  // 문자열 비교
        {
            count++;
        }
    }
    
    return count;
}