///week03-1.cpp 考試題目:除惡務盡,但無法執行
///因為range-based for 迴圈 必須在c++11 (2011之後)才能用
///如果使用c++98(1998年版c++) 會無法正確編譯

#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for(char c : s){
        if(c != '2') cout << c;
    }
    return 0;
}
