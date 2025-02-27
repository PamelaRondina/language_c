# Desafio
Faça um programa que calcule e imprima o salário a ser transferido para um funcionário.

Para realizar o cálculo receba o valor bruto do salário e o adicional dos benefícios.
O salário a ser transferido é calculado da seguinte maneira:

(valor bruto do salário - percentual de imposto mediante ao salário) + adicional dos benefícios.

Para calcular o **percentual de imposto** seguem as alíquotas:

- De R$ 0.00 a R$ 1100.00 = 5.00%
- De R$ 1100.01 a R$ 2500.00 = 10.00%
- Maior que R$ 2500.00 = 15.00%

## Entrada
A entrada consite em vários arquivos de testes, que conterá o **valor bruto do salário** e **adicional dos benefícios**. Conforme mostrado no exemplo de entrada a seguir:

## Saída
Para cada arquivo de entrada, terá um arquivo de saída. E como mencionado no Desafio, será gerado uma linha com um número que será a diferença entre o valor bruto do salário e o percentual de imposto mediante a faixa salarial somado com o adicional dos beneficios. Use o exemplo abaixo para clarear o que está sendo pedido.

Entrada | Saída
|-|
2000 250 | 2050.00
5500 250 | 4925.00
