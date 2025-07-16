#include <iostream>
using namespace std;

int main () {

    int n = 9;
    // char op = 'A'; 
    for (int i = 1 ; i <= n; i++){
        char op = 'A';
        for (int j = 1; j <=n ; j++){
            cout<<op<<' ';
            op++;

        }
    cout<<endl;
    }
    return 0;
}


/*
A B C D E F G H I 
J K L M N O P Q R
S T U V W X Y Z [
\ ] ^ _ ` a b c d 
e f g h i j k l m
n o p q r s t u v
w x y z { | } ~  
Ç ü é â ä à å ç ê
ë è ï î ì Ä Å É æ


thats why char op = 'A' is not written outside the looop
*/