#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cleanString(char *text) {
    text[strlen(text) - 1] = '\0';
}

int checkCondition(char *str) {
    // proverka dali e palindrom
    int i, isPalindrome = 1, hasSpecialChar = 0;
    int n = strlen(str);
    for (i = 0; i < strlen(str) / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            isPalindrome = 0;
        }
    }
    for (i = 0; i < strlen(str) / 2; i++) {
        if (!isalnum(str[i])) {
            hasSpecialChar = 1;
        }
    }
    return isPalindrome == 1 && hasSpecialChar == 1;
}

int main() {
    int i, N;
    scanf("%d\n", &N);
    int maxLen = 0;
    char max[81];

    for (i = 0; i < N; i++) {
        char line[81];
        fgets(line, sizeof(line), stdin);
        cleanString(line);
        if (checkCondition(line)) {
            if (strlen(line) > maxLen) {
                maxLen = strlen(line);
                strcpy(max, line);
            }
        }
    }
    if (maxLen) {
        puts(max);
    } else {
        printf("Nema!");
    }

    return 0;
}

/*

Од стандарден влез се чита цел број N (N <= 100) и потоа N низи од знаци. Низите знаци содржат букви, цифри и специјални знаци (без знаци за празно место), а секој од нив не е подолга од 80 знаци.

Да се напише програма со која што на стандарден излез ќе се отпечати најдолгата низа, којашто е палиндром (се чита ито од лево на десно и од десно на лево) и што содржи барем еден специјален знак. Ако нема такви низи, се печати “Nema”, Ако има две или повеќе низи што го задоволуваат овој услов, се печати првата низа којашто го задоволува условот.

Влез:
9
a!bcdedcb!a
Kfd?vsvv98_89vvsv?dfK
Ccsvsdvdfv
342425vbbcb
352!2353696969625
gdg??dfg!!
5336346644747
8338736767867
12344321

Излез:
Kfd?vsvv98_89vvsv?dfK
  */