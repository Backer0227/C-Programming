//책에서는 4번의 for문 실행으로 가장 큰 값부터 차례대로 나눠서 카운트에 저장함.
#include<iostream>

using namespace std;

int countseller(int change, int &a, int &b, int &c, int &d){
    int vrchange = change;
    while((vrchange-500) >= 0)
    {
        vrchange-=500;
        cout << vrchange;
        a++;
    }
    while((vrchange-100) >= 0)
    {
        vrchange-=100;
        b++;
    }
    while((vrchange-50) >= 0)
    {
        vrchange-=50;
        c++;
    }
    while((vrchange-10) >= 0)
    {
        vrchange-=10;
        d++;
    }

}

int main(){
    int change;
    int a=0,b=0,c=0,d=0;
    cin >> change;
    countseller(change,a,b,c,d);

    cout << "동전의 최소 개수: " << a+b+c+d << "\n";


    return 0;
}