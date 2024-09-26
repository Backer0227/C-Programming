#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N, M, result = 0; //초기화를 해줘야 기존에 있던 result 값이랑 오류가 나지 않음.
    cin >> N >> M;

    for(int i=0;i<N;i++)
    {
        int min_value = 10001;
        for(int j=0;j<M;j++)
        {
            int b;
            cin >> b;
            min_value = min(min_value,b);
        }
        result = max(result,min_value);
    }
    cout << result << '\n';
    
    return 0;
}