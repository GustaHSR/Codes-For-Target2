#include <bits/stdc++.h>

#define pb push_back
#define f first
#define s second
#define ll long long
#define ld long double

using namespace std;

//3) Descubra a lógica e complete o próximo elemento:  

/*a) 1, 3, 5, 7, ___ --> pŕoximo elemento é 9 pois foi aumentando de 2 em 2
  1+2 = 3+2 = 5+2 = 7+2 = 9
 
b) 2, 4, 8, 16, 32, 64, ____  --> pŕoximo elemento é 128 pois foi aumentando multiplicando os valores por 2
  2*2 = 4*2 = 8*2 = 16*2 = 32*2 = 64*2 = 128

c) 0, 1, 4, 9, 16,25,36, ____  --> pŕoximo elemento é 49 pois foi aumentando de acordo com o quadrado dos números
   0² 1² 2² 3² 4² 5² 6²  7²


d) 4,  16, 36,  64,  ____  --> pŕoximo elemento é 100 pois foi aumentando de acordo com o quadrado dos números pares
   2²  4²  6²   8²   10²

e) 1, 1, 2, 3, 5, 8, ____  --> pŕoximo elemento é 13 pois foi aumentando somando o número atual com o número anterior
  1+1 = 2+1 = 3+2 = 5+3 = 8+5 = 13 

f) 2,10, 12, 16, 17, 18, 19, ____ --> pŕoximo elemento é 200 pois são apenas números que começam com a letra D
  Dois, Dez, Doze, Dezesseis, Dezessete, Dezoito, Dezenove e Duzentos*/
