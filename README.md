# 📊 Analisador de Desempenho Acadêmico em C

Este é um sistema interativo em C desenvolvido para gerenciamento e análise estatística de notas escolares. O projeto foi criado com o objetivo de consolidar conceitos fundamentais de programação estruturada, controle de fluxo e validação de dados.

## 🚀 Funcionalidades

- **Menu Interativo (`do while`):** Interface via terminal que roda continuamente até que o usuário decida encerrar o programa.
- **Validação Robustas de Entrada (`while`):** O sistema impede a inserção de notas inválidas (menores que 0 ou maiores que 10), garantindo a integridade dos dados.
- **Estatísticas em Tempo Real:**
  - Cálculo automático da média geral da turma.
  - Identificação dinâmica da maior e da menor nota inseridas.
  - Contagem totalizada de alunos aprovados e reprovados (Critério de aprovação: Nota >= (maior ou igual) 7.0).
- **Tratamento de Exceções:** Proteção contra erros matemáticos (como divisão por zero caso o usuário tente ver estatísticas sem antes ter digitado nenhuma nota).

## 🛠️ Conceitos de Programação Aplicados

Este projeto demonstra o domínio prático de:
1. Estruturas de repetição pré-testadas (`while`) e pós-testadas (`do while`).
2. Escopo e inicialização estratégica de variáveis.
3. Tomada de decisão com estruturas condicionais (`if/else` e `switch case`).
4. Boas práticas de formatação e exibição de dados (`printf` com limitadores de casas decimais).

## 💻 Como Executar o Projeto

Para compilar e rodar este programa na sua máquina, você precisará de um compilador C (como o GCC).

1. **Clone este repositório:**
   ```bash
   git clone [https://github.com/chr1xz7/analisador-de-notas-c.git](https://github.com/chr1xz7/analisador-de-notas-c.git)
