#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char str[100];
    int space = 0;

    cout << "Enter the Sentence:";
    //cin.getline(str, 100);
    gets(str);

    for(int i = 0; str[i] != '\0'; ++i){
        if(str[i] == ' '){
            ++space;
        }
    }
    cout << "Number of word in this sentence:" << space+1 << endl;
    return 0;
}
