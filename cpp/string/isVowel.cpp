#include <cstring>

bool isVocal(string a){
    if(a.length() != 1) return false; // Hanya cek string yang berisi 1 huruf
    if(a == "a" || a == "i" || a == "u" || a == "e" || a == "o" || a == "A" || a == "I" || a == "U" || a == "E" || a == "O"){
        return true;
    }
    return false;
}
