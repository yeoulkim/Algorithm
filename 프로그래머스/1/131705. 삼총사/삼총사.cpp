#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    
    // 삼총사에 들어갈 숫자 3개 골라야함 = i, j, k
    // 첫 번째 수 고르기
    for (int i = 0; i < number.size(); i++)
    {
        // 두 번째 수 고르기 (i보다 뒤에 있는 수)
        for (int j = i + 1; j < number.size(); j++)
        {
            // 세 번째 수 고르기 (j보다 뒤에 있는 수)
            for (int k = j + 1; k < number.size(); k++)
            {
                // 세 수의 합이 0이면 정답에 1 더하기
                // 조합의 개수를 구해야 하니까 조합 1개 찾으면 1 추가
                // number[i] : 벡터 안에 들어간 i번째 숫자를 꺼내옴
                if (number[i] + number[j] + number[k] == 0)
                {
                    answer++;   // 찾았으니까 정답에 1 추가하기
                }
            }
        }
    }
    
    return answer;
}