
### 📝 QUESTÃO 01

**Descrição:**  
Crie um programa que contenha duas variáveis do tipo `float`. Inicialize essas variáveis com valores quaisquer, compare os endereços das variáveis e imprima o maior endereço.

### 💻 Código:

```c
#include <stdio.h>

int main() {
    float var1 = 3.14, var2 = 6.28;

    // Exibir os endereços
    printf("Endereço de var1: %p\n", (void*)&var1);
    printf("Endereço de var2: %p\n", (void*)&var2);

    // Comparar e imprimir o maior endereço
    if (&var1 > &var2) {
        printf("O maior endereço é de var1: %p\n", (void*)&var1);
    } else {
        printf("O maior endereço é de var2: %p\n", (void*)&var2);
    }

    return 0;
}
```

---

### 📝 QUESTÃO 02

**Descrição:**  
Escreva um programa que contenha duas variáveis do tipo `int`. Leia essas variáveis do teclado, compare os endereços e exiba o conteúdo da variável com o maior endereço.

### 💻 Código:

```c
#include <stdio.h>

int main() {
    int var1, var2;

    // Leitura das variáveis
    printf("Digite o valor de var1: ");
    scanf("%d", &var1);
    printf("Digite o valor de var2: ");
    scanf("%d", &var2);

    // Exibir os endereços
    printf("Endereço de var1: %p\n", (void*)&var1);
    printf("Endereço de var2: %p\n", (void*)&var2);

    // Comparar os endereços e exibir o conteúdo do maior
    if (&var1 > &var2) {
        printf("O conteúdo do maior endereço é: %d\n", var1);
    } else {
        printf("O conteúdo do maior endereço é: %d\n", var2);
    }

    return 0;
}
```

---

### 🔍 Explicação

1. **Questão 01:**  
   - As variáveis `float` são inicializadas diretamente no código.  
   - O operador `&` é usado para obter os endereços de memória das variáveis.  
   - O programa compara os endereços e imprime o maior.

2. **Questão 02:**  
   - As variáveis `int` são lidas do teclado com `scanf`.  
   - O operador `&` é usado para obter os endereços de memória.  
   - O programa compara os endereços e exibe o conteúdo da variável com o maior endereço.