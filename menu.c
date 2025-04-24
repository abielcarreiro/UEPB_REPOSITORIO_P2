#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//constantes 
#define MAXSIZENAME 200 
#define MAXTASKSAVEING 5

// prototypes
//mostrar todas as tasks salvas
void showTask();
// adicionaor novas tasks 
void addTask(int index);
// marcar e desmarcar task
void checkingTask(int index);
// deletear task
void deleteTask(int index);

//funcoes de ultilidade
int getIndex();


// constructor
struct Tasks {
    char nome[MAXSIZENAME];
    int isDone;
};

int main(void){
    // var
    int key, i, index; 
    struct Tasks task[MAXTASKSAVEING];

    setlocale(LC_ALL, "Portuguese");

    do{ 
        
        printf("-------------------- TODO -----------------------\n");
        printf("digite 0 para finalizar o sistema.\n");
        printf("digite 1 para ver as tasks salvas .\n");
        printf("digite 2 para adicionar uma nova task .\n");
        printf("digite 3 para marcar/desmarcar as tasks .\n");
        printf("digite 4 para deletar uma task. \n");
        printf("-------------------------------------------------\n");
        scanf("%d",&key);
        
        if (key != 0 && sizeof(key) == 4);
        switch(key){
            case 1 :
            //showTask();
            break;

            case 2 :
            printf("Digite a task q vc deseja adicionar :");
            //addTask(getIndex());
            break;

            case 3 :
            //showTask();
            printf("Digite qual task vc deseja marcar ou desmarcar : ");
            //checkingTask(getIndex());
            break;

            case 4 :
            //showTask();
            printf("Ditite qual task vc deseja deletar : ");
            //deleteTask(getIndex());
            break;

            default :
            printf("opção inválida\n");
            system("pause");
            fflush(stdin);
            continue;
        }
    }while(key != 0);
    system("cls");

    return 0;
}
/*
void addTask(int i){
    scanf("%s", task[i].nome);
    task[i].isDone = 0;
}

void showTask(){
    for (int i; i < MAXTASKSAVEING; i++ ){
        printf("%S do elemento %s ----> %d\n",task[i].nome,i, task[i].isDone);
    }
}

void deleteTask(int index){
    
    task[index].nome = "";
    task[index].isDone = 0;
    for(int i, i  < MAXTASKSAVEING, i++){
        if (task[MAXTASKSAVEING -i].nome == ""){
            task[MAXTASKSAVEING -i].nome = task[index + 1].nome
        }
    }
}


int getIndex(){
    int index;
    scanf("%d",&index);
    return index;
}*/ 