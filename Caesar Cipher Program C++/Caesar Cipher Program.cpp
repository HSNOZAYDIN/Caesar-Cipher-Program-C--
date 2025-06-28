#include <iostream>
#include <string>


using namespace std;


void cesarEncrypt() {
    cout << "Cesar Cryptography Program\n";
    cout << "\n";

    cout << "Please enter a text and this program will encrypt the entered text.\n";

    string arr;
    cout << "Enter text (uppercase English letters only): ";
    getline(cin, arr);

    cout << "Encrypted text: ";
    for (char c : arr) {
        switch (c) {
        case 'A':
            cout << "X";
            break;
        case 'B':
            cout << "Y";
            break;
        case 'C':
            cout << "Z";
            break;
        case 'D':
            cout << "A";
            break;
        case 'E':
            cout << "B";
            break;

        case 'F':
            cout << "C";
            break;
        case 'G':
            cout << "D";
            break;
        case 'H':
            cout << "E";
            break;
        case 'I':
            cout << "F";
            break;
        case 'J':
            cout << "G";
            break;



        case 'K':
            cout << "H";
            break;
        case 'L':
            cout << "I";
            break;
        case 'M':
            cout << "J";
            break;
        case 'N':
            cout << "K";
            break;
        case 'O':
            cout << "L";
            break;
        case 'P':
            cout << "M";
            break;
        case 'Q':
            cout << "N";
            break;
        case 'R':
            cout << "O";
            break;


        case 'S':
            cout << "P";
            break;
        case 'T':
            cout << "Q";
            break;
        case 'U':
            cout << "R";
            break;
        case 'V':
            cout << "S";
            break;
        case 'W':
            cout << "T";
            break;
        case 'X':
            cout << "U";
            break;
        case 'Y':
            cout << "V";


            break;
        case 'Z':
            cout << "W";
            break;
        default:
            cout << "\nInvalid character encountered. Please enter uppercase English letters only.\n";
            return;



        }
    }






    cout << "\n";
}


void cesarDecrypt() {
    cout << "\nCesar Decryption Program\n";
    cout << "\n";

    cout << "Please enter an encrypted text and this program will decrypt it.\n";

    string arr;
    cout << "Enter encrypted text (uppercase English letters only): ";
    getline(cin, arr);

    cout << "Decrypted text: ";
    for (char c : arr) {
        switch (c) {
        case 'X':
            cout << "A";
            break;
        case 'Y':
            cout << "B";
            break;
        case 'Z':
            cout << "C";
            break;
        case 'A':
            cout << "D";
            break;


        case 'B':
            cout << "E";
            break;
        case 'C':
            cout << "F";
            break;
        case 'D':
            cout << "G";
            break;
        case 'E':
            cout << "H";
            break;


        case 'F':
            cout << "I";
            break;
        case 'G':
            cout << "J";
            break;
        case 'H':
            cout << "K";
            break;
        case 'I':
            cout << "L";
            break;
        case 'J':
            cout << "M";
            break;
        case 'K':
            cout << "N";
            break;
        case 'L':
            cout << "O";
            break;
        case 'M':
            cout << "P";
            break;
        case 'N':
            cout << "Q";
            break;


        case 'O':
            cout << "R";
            break;
        case 'P':
            cout << "S";
            break;
        case 'Q':
            cout << "T";
            break;
        case 'R':
            cout << "U";
            break;
        case 'S':
            cout << "V";
            break;


        case 'T':
            cout << "W";
            break;
        case 'U':
            cout << "X";
            break;
        case 'V':
            cout << "Y";
            break;
        case 'W':
            cout << "Z";
            break;
        default:
            cout << "\nInvalid character please just enter uppercase English letters only.\n";
            return;
        }
    }


    cout << "\n";
}





int main() {
    cesarEncrypt();
    cesarDecrypt();
    return 0;



}

