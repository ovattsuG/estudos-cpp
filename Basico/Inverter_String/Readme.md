# Inverter String

## Descrição
Um programa em C++ que inverte uma palavra digitada pelo usuário.

## Como funciona
1. Solicita ao usuário que digite uma palavra
2. Itera pela palavra do último caractere até o primeiro
3. Constrói uma nova string com os caracteres em ordem inversa
4. Exibe a palavra invertida

## Entrada
- Uma única palavra (string sem espaços)

## Saída
- A palavra invertida

## Exemplo
```
Entrada: olá
Saída: álо
```

## Compilação e Execução
```bash
g++ inverter_string.cpp -o inverter_string
./inverter_string
```

## Notas
- O programa utiliza um simples laço para inverter a string caractere por caractere
- A entrada é limitada a uma única palavra (espaços em branco quebram a entrada)
