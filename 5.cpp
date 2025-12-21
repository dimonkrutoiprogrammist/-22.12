#include <iostream>
#include <algorithm> 
#include <cstring>
using namespace std;

//Функция
void NameFio(const string name){
    int n = name.length(); 
    int space = 0; //Счетчик пробелов

    //Цикл для форматирования
    for(int i = 0; i < n; i++){
        char stroka = name[i];
       
        if(stroka == ' '){
            space++;
        }
    }
}

int main() {
    //Переменная
    string name;
    
    cout << "Введите ФИО: ";
    getline(cin, name);


    return 0;

}
