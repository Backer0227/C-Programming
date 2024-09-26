#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N, M, K, next_max_num ,max_num;

    cin >> N >> M >> K;
    vector<int> array;
    for(int i=0; i<N; i++)
    {
        int a;
        cin >> a;
        array.push_back(a);
    }
    sort(array.begin(),array.end());
    max_num = array[N-1];
    next_max_num = array[N-2];  

    //(K+1)의 의미: 가장 큰 수를 K만큼 더한 카운트에 그 다음 큰 수 만큼 더한 반복되는 수열
    int count = (M / (K+1)) * K;
    count += M % (K+1);

    int result = 0;
    result += count * max_num;
    result += (M-count) * next_max_num;

    cout << result << '\n';
    return 0;
}