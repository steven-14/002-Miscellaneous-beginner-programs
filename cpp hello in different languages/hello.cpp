#include <iostream.h>
#include <string.h>
#include <stdio.h >

using namespace std;


int main() 
{
    menu:
    cout << "type [hello, hola, bonjour, gutentag (no spaces) or quit\n ";
    string reply;
    cin >> reply;
    if(reply == "hello") goto a; 
    if(reply == "hola") goto b; 
    if(reply == "bonjour") goto c; 
    if(reply == "gutentag") goto d; 
    if(reply == "quit") goto end; 
    a: cout<<"you typed hello\n";
    goto menu;
    b: cout<<"you typed hola\n";
    goto menu;
    c: cout<<"you typed bonjour\n";
    goto menu;
    d: cout<<"you typed guten tag\n";
    goto menu;
 end:
return 0;
}

