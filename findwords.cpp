#include <iostream>
#include <cstring>
using namespace std;

//ubah input ke huruf kapital
void toUpperCase(char* str){
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    int num;
    cin >> num;
    cin.ignore(); 

    char words[num][23];

    for (int i = 0; i < num; i++) {
        cin.getline(words[i], 25);
        toUpperCase(words[i]);
    }

    //test
    for (int i = 0; i < num; i++) {
        cout << words[i] << endl;
    }
    return 0;
}