#include<iostream>
#include<string>
using namespace std ;
int main() {
    char s[1000] ;
    int count = 0 ;
    cin.ignore() ;
    cout << "Nhap xau S: " ; cin >> s ;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
        {
            count++ ;
        }
        
        
    }
    cout << "So tu cua S: " << count ;

}
