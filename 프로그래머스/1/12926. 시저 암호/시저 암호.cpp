#include <string>
#include <vector>

using namespace std;

string solution(string s, int n)    // n은 밀어주는 칸 수
{
    string answer = "";
    
    // 문자열 s 안에 있는 글자를 처음부터 끝까지 하나씩 꺼내서 letter라는 변수에 담아서 반복함
    for (char letter : s)  
    {        
        // 현재 문자가 소문자인 경우
        if (letter >= 'a' && letter <= 'z')
        {
            letter = (letter - 'a' + n) % 26 + 'a';
        }
        
        // 현재 문자가 대문자인 경우
        else if (letter >= 'A' && letter <= 'Z')
        {
            letter = (letter - 'A' + n) % 26 + 'A';
        }
        
        // 공백인 경우 아무것도 하지 않음 - 그대로 두기
        
        answer += letter;   // 모든 경우에 변환된 letter을 answer에 추가
        
    }
    
    return answer;
}