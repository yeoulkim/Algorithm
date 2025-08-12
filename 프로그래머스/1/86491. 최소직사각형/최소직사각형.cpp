#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) 
{
    int W = 0;  // 긴 변(가로)의 최댓값
    int H = 0;  // 짧은 변(세로)의 최댓값
    
    // 타입을 auto로 하면 짧고 안전하고 유지보수 쉬움
    // const -> 복사 없이 읽기 전용
    for (const auto& S : sizes) 
    {
        // 배열에 들어온 수 넣어주기
        int A = S[0];
        int B = S[1];
        
        int Long = (A > B) ? A : B; // 들어온 수 둘 중에 긴 변 고르기
        int Short = (A > B) ? B : A;    // 짧은 변 고르기
        
        if (W < Long)   // 새로 본 값 Long이 현재 최댓값 W 보다 크면 
        {
            W = Long;   // Long 값 갈아낀다
        }
        
        if (H < Short)
        {
            H = Short;
        }
    }
    
    return W * H;
}