#include <stdio.h>

int main() {
    printf("Hello, World!\n");
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