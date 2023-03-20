#include <bits/stdc++.h>

#define pb push_back
#define f first
#define s second
#define ll long long
#define ld long double

using namespace std;

/*4 - Dois veículos (um carro e um caminhão) saem respectivamente de cidades opostas pela mesma rodovia. O carro de Ribeirão 
Preto em direção a Franca, a uma velocidade constante de 110 km/h e o caminhão de Franca em direção a Ribeirão Preto a uma 
velocidade constante de 80 km/h. Quando eles se cruzarem na rodovia, qual estará mais próximo a cidade de Ribeirão Preto?  

IMPORTANTE:  

a) Considerar a distância de 100km entre a cidade de Ribeirão Preto <-> Franca.  

b) Considerar 2 pedágios como obstáculo e que o caminhão leva 5 minutos a mais para passar em cada um deles e o carro possui 
tag de pedágio (Sem Parar)  

c) Explique como chegou no resultado.  */


/*Resposta: O caminhão roda 110km a cada 60 min. Portanto roda 100km a cada 54 min (regra de três simples).
 Já o carro anda 80km a cada 60min. Portando roda 100 km a cada 75 min. Então a diferença de tempo de cada um para chegar no local
 é de 21 minutos. 
 
 Porém o caminhão tem que passar pelos pedágios. Se a cada 60 min ele faz 110 km, então faz 1,8 km a cada minuto. Então perdendo 
 10 minutos por pedágio ele perde 18/aproximadamente 19 minutos. O que faz eles chegarem chegar nos seus respectivos
 destinos aproximadamente no mesmo horário. 
 
 Tendo assim a resposta de quando se encontrarem estarão na mesma distância de seus 
 respectivos destinos.*/
