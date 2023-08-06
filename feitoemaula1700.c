// This function counts how many students can be given sandwiches.
int countStudents(int* students, int studentsSize, int* sandwiches, int sandwichesSize){
    // Create an array "count" of size 2 to count the types of students and sandwiches.
    int count[2] = {0};
    
    // Iterate through the students array to count how many of each type exist.
    for(int i = 0; i < studentsSize; i++){
        count[students[i]]++;
    }
    
    // Iterate through the sandwiches array.
    for(int i = 0; i < sandwichesSize; i++){
        // Check if there are no more students of the type corresponding to the current sandwich.
        if(count[sandwiches[i]] == 0){
            // Return the number of remaining sandwiches to be delivered.
            return sandwichesSize - i;
        }
        // Decrement the count of the student type corresponding to the delivered sandwich.
        count[sandwiches[i]]--;
    }
    
    // Return 0 if all students have received their sandwiches.
    return 0;
}
