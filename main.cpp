#include <iostream>

using namespace std;

int main(){
    string message;
    string morseCodes[26] = {
        ".-", "-...", "-.-.","-..", ".", "..-.", "--.", "...." "..", ".---", //from A to J
        "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", //from K to T
        "..-", "...-", ".--", "-..-", "-.--", "--.." //from U to Z
    };

    cout << "Enter a massage in English (A-Z characters only): ";//h
    getline(cin, message);//he

    string fullMorseCode = "";//hgy

    cout << "\nOutput Morse code:" << endl;

    for (int i = 0; i < message.length(); i++){
        char ch = toupper(message[i]);

        if (ch >= 'A' && ch <= 'Z') {
            string morse = morseCodes[ch - 'A'];

            for (int j = 0; j < morse.length(); j++){
                if (morse[j] == '.'){
                    cout << char(46);
                } else if (morse[j] == '-'){
                    cout << char(45);
                }
            }
            cout << " ";
            fullMorseCode += morse + " ";

            cout << endl << ch << ": ";
            for (int j = 0; j < morse.length(); j++){
                if (morse[j] == '.'){
                    cout << char(46);
                } else if (morse[j] == '-'){
                    cout << char(45);
                }
            }
            cout << endl;
        }
        else if (ch == ' '){
            fullMorseCode += " ";
        }

    }
    cout << "\nFull Morse code with spaces:" << endl;
    cout << fullMorseCode << endl;





    return 0;
}
