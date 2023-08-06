// Esta função conta quantos estudantes poderão receber sanduíches.
int countStudents(int* students, int studentsSize, int* sandwiches, int sandwichesSize){
    // Cria um array "count" de tamanho 2 para contar os tipos de estudantes e sanduíches.
    int count[2] = {0};
    
    // Percorre o array de estudantes para contar quantos de cada tipo existem.
    for(int i = 0; i < studentsSize; i++){
        count[students[i]]++;
    }
    
    // Percorre o array de sanduíches.
    for(int i = 0; i < sandwichesSize; i++){
        // Verifica se não há mais estudantes do tipo correspondente ao sanduíche atual.
        if(count[sandwiches[i]] == 0){
            // Retorna o número de sanduíches restantes a serem entregues.
            return sandwichesSize - i;
        }
        // Decrementa o contador do tipo de estudante correspondente ao sanduíche entregue.
        count[sandwiches[i]]--;
    }
    
    // Retorna 0 se todos os estudantes receberam seus sanduíches.
    return 0;
}
