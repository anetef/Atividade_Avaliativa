/*. Faça um algoritmo que leia as três notas de 30 alunos de uma turma. Para cada aluno, calcule a média ponderada,
 como segue: MP = ( n1*2 + n2*4 + n3*3 ) / 10

Além disso, calcule a média geral da turma. Mostre a média de cada aluno e uma mensagem "Aprovado",
 caso a média seja maior ou igual a sete, e uma mensagem "Reprovado", caso contrário. Ao final, mostre a média geral*/


 #include<stdio.h>
 int main(){
    float n1, n2, n3, mp, mediageral = 0;
    int totalalunos;
    

    while(totalalunos < 30){
      printf("Informe a nota1, nota2, nota3:\n");
    scanf("%f %f %f", &n1, &n2, &n3);
      totalalunos++;
      mp = (( n1*2 + n2*4 + n3*3 ) / 10);
      printf("media total dos alunos %.2f", mp);
       mediageral+= mp;
    }
    mediageral/=30;
    printf("media geral da turma: %.2f", mediageral);

    if (mp >= 7){
      printf("Aprovado");
     }else{
      printf("Reprovado");

    }
    
    return 0;
 }

