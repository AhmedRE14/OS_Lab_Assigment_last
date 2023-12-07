#include <stdio.h>

int main() {
    char letters[] = "abcdefghijklmnopqrstuvwxyz"; //array containg the letters 
    int i, j, k, l;


    for (i = 0; i < 26; ++i) {// first letter 26
        for (j = 0; j < 26; ++j) {//2nd letter 
            if (i == j) {
                continue;
            }

            for (k = 0; k < 26; ++k) { //3rd letter
                if (i == k || j == k) {
                    continue;
                }

                for (l = 0; l < 26; ++l) {
                    if (i == l || j == l || k == l) {//4th letter
                        continue;
                    }

                    printf("%c%c%c%c\n", letters[i], letters[j], letters[k], letters[l]);
                }
            }
        }
    }

    return 0;
}
