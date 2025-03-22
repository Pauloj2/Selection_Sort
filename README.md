# 📊 Selection Sort - Implementação e Otimização 🛠️

## 📝 Descrição

<a href="https://pt.wikipedia.org/wiki/Selection_sort">
    <img src="https://github.com/user-attachments/assets/799f85e1-e8f5-48f2-9055-bc2ada4f0be8" alt="Bubble_sort_animation" align="right" width="250" height="250">
</a>

Este repositório contém a implementação de um algoritmo de ordenação amplamente utilizado para organizar listas de números em ordem crescente ou decrescente. O código é escrito de forma clara e estruturada, facilitando o entendimento do processo de ordenação.

O **Selection Sort** é um algoritmo de ordenação simples e intuitivo. Ele percorre a lista para encontrar o menor elemento e o coloca na posição correta. Esse processo se repete até que todos os elementos estejam ordenados. Embora não seja o mais eficiente para grandes volumes de dados, é fácil de entender e implementar.

Fonte do Gif: https://pt.wikipedia.org/wiki/Selection_sort

## ⚙️ Como Funciona
<a href="https://br.pinterest.com/pin/681873199869286101/">
    <img src="https://github.com/user-attachments/assets/425b9e5c-1e0a-47cd-9c07-07c36d65386d" alt="Selection_sort" align="right" width="400" height="600">
</a>

### Passo a Passo do Algoritmo:
1. Encontre o menor elemento no array e troque-o com o primeiro elemento.
2. Encontre o segundo menor elemento e troque-o com o segundo elemento.
3. Repita esse processo até que todos os elementos estejam ordenados.

### Exemplo de Funcionamento

#### Vetor Inicial:
`[3, 2, 8, 1, 5]`

#### Iterações do Selection Sort:
1. **Primeira passagem**: Encontra o menor elemento (1) e troca com o primeiro.  
   **Vetor:** `[1, 2, 8, 3, 5]`
2. **Segunda passagem**: Encontra o segundo menor (2) e mantém na segunda posição.  
   **Vetor:** `[1, 2, 8, 3, 5]`
3. **Terceira passagem**: Encontra o terceiro menor (3) e troca com a terceira posição.  
   **Vetor:** `[1, 2, 3, 8, 5]`
4. **Quarta passagem**: Encontra o quarto menor (5) e troca com a quarta posição.  
   **Vetor:** `[1, 2, 3, 5, 8]`

#### Resultado Final:
`[1, 2, 3, 5, 8]` (ordenado)

Fonte da imagem: https://br.pinterest.com/pin/681873199869286101/

## 🛠️ Tecnologias Utilizadas
- Linguagem: C++ 💻
- Ambiente de Desenvolvimento: CodeBlocks

## 🔍 Algoritmo Selection Sort

### Versão Básica do Selection Sort:
O Selection Sort percorre a lista, encontra o menor elemento e o coloca na posição correta. Esse processo se repete até que a lista esteja totalmente ordenada.

#### 📚 Implementação em C++


![selectionSort](https://github.com/user-attachments/assets/0e22e652-ec73-42f4-bbe2-8cacbfb38917)


### 🚀 Versão Otimizada do Selection Sort:
Nesta versão, evitamos trocas desnecessárias ao verificar se o menor elemento já está na posição correta.


![selectionOtimizado](https://github.com/user-attachments/assets/e2b05d74-ee73-4888-ba9a-a92d05040c20)


## 💪 Testes Realizados
Foram realizados testes comparando a versão básica com a otimizada, e verificamos que a otimização melhora a performance em listas quase ordenadas.

### 📊 Resultados:
#### Versão Básica:

![saida](https://github.com/user-attachments/assets/8ede9135-853d-4b72-826b-546d842833b1)


#### Versão Otimizada:

![saida_otimizada](https://github.com/user-attachments/assets/0c0c3c5e-9d08-43bd-9946-e597436bb595)


## 📈 Conclusão
- O **Selection Sort** é eficiente para listas pequenas, mas ineficiente para listas grandes devido à complexidade **O(n²)**.
- A versão otimizada melhora o desempenho em listas quase ordenadas, reduzindo o número de trocas desnecessárias.
  
## 📚 Licença
Distribuído sob a licença MIT.

