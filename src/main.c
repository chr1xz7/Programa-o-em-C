#include <stdio.h>

int main(){
    int opcao;
    
    int totalAlunos = 0;
    int aprovados = 0;
    int reprovados = 0;
    float somaNotas = 0.0;
    float menorNota = 11.0;
    float maiorNota = -1.0;
    

    do{
        printf("\n--- SISTEMA ACADÊMICO ---\n");
        printf("1. Inserir Nova Nota\n");
        printf("2. Ver Estatísticas\n");
        printf("3. Sair do Programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao){
        case 1: {
            float notaAtual;

            printf("\nDigite a nota do Aluno (0.0 a 10.0): ");
            scanf("%f", &notaAtual);

            while (notaAtual < 0.0 || notaAtual > 10.0)
            {
                printf("\n!!!Nota inválida!!!");
                printf("\nDigite novamente! (0.0 a 10.0): ");
                scanf("%f", &notaAtual);
            }

            totalAlunos++;
            somaNotas += notaAtual;

            if (notaAtual > maiorNota){
             maiorNota = notaAtual;}
            
             if (notaAtual < menorNota){
                menorNota = notaAtual;
             }
            
            if (notaAtual >= 7.0){
                aprovados++;
            } else {
                reprovados++;
            }
            
            printf(" === Nota %.1f registrada com sucesso! === \n", notaAtual);
            break;
        }
        case 2:
        if (totalAlunos == 0){
           printf("\n Nenhuma nota foi registrada ainda!\n");
        } else{
            float media = somaNotas/ totalAlunos; -

            printf("\n--- ESTATÍSTICA DA TURMA ---\n");
            printf("Total de alunos registrados: %d\n", totalAlunos);
            printf("Média geral da turma: %.2f\n", media);
            printf("Maior nota registrada: %.2f\n", maiorNota);
            printf("Menor nota registrada: %.2f\n", menorNota);
            printf("Alunos aprovados: (>= 7.0 %d\n", aprovados);
            printf("Alunos reprovados: (< 7.0): %d\n", reprovados);

        }
            break;
            case 3:
            printf("\nSaindo do sistema... Até logo!\n");
            break;
        default:
        printf("\nOpção inválida! Tente novamente. \n");
            break;
        }
        
    } while (opcao != 3);
    
    return 0;
}
