Questão 1 - Aloque dinamicamente uma matriz, receba os seus elementos via teclado e calcule a matriz transposta.


A matriz transposta de M, trata-se de uma matriz obtida ao trocar de posição as linhas e colunas da matriz M. Logo, a primeira linha de M se transforma na primeira coluna de Mt, a segunda linha de M na segunda coluna de Mt, e assim sucessivamente.

Exemplo:


         1   2
M =   3   4
         5   6



Mt = 1   3   5
         2   4   6

Onde, M é a matriz original (informada) e Mt é a matriz transposta.

Questão 2 - Implemente uma função que determine se uma matriz, informada pelo usuário e alocada dinamicamente, é simétrica quadrada ou não.

Uma matriz M é simétrica quando a sua matriz transposta é igual à própria matriz M. Ou seja, M = Mt. Vale ressaltar que uma matriz simétrica sempre será uma matriz quadrada, ou seja, tem um formato n x n (mesmo número de linhas e colunas).

Exemplo:
<pre>
         1   2   4
M =      2   2   0
         4   0   3

          1   2   4
Mt =      2   2   0
          4   0   3
</pre>

Onde, M é quadrada e M = Mt.