#include "Functions.h"

int sum(int num1, int num2){
    return num1 + num2;
}

int difference(int num1, int num2){
    return num1-num2;
}

int product(int num1, int num2){
    return num1*num2;
}

int quotient(int num1, int num2){
    if(num2==0){
        printf("Cannot divide by 0!\n");
        return 0;
    }
    return num1/num2;
}

long long int factorialUsingLoop(int num){
    int i;
    long long int factorial = 1;
    for (i = 1; i <= num; i++) {
        factorial *= i;
    }
    return factorial;
}

int isInFibonacci(int num){
    int f1=1, f2=1, aux;
    if(num==1)
        return 1;
    while(num>f2){
        aux=f1+f2;
        f1=f2;
        f2=aux;
        if(num==f2)
            return 1;
    }
    return 0;
}

long long int recursiveFactorial(int num){
    if(num==0)
        return 1;
    return num*recursiveFactorial(num-1);
}

int isPrimeNumber(int num){
    if (num<=1)
        return 0;
    for (int i = 2; i < num; ++i) {
        if (num%i==0)
            return 0;
    }
    return 1;
}

void showArray(int array [] , int size){
    for(int i = 0; i<size; i++){
        printf("%d\t",array[i]);
    }
    printf("\n");
}

void reverseArray(int * array, int size){
    int aux;
    for(int i = 0; i < size/2; i++){
        aux=*(array+i);
        *(array+i)=*(array+(size-1-i));
        *(array+(size-1-i))=aux;
    }
}

int isPalindrome(char * word){
    char *end, *start;
    start = end = word;
    while(*end!='\0'){
        end++;
    }
    end--;
    while(start<end){
        if(*start!=*end){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

void showMatrixInt(int * matrix, int rows, int columns){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("%d ",*(matrix+(i*rows+j)));
        }
        printf("\n");
    }
}

void transposeMatrixInt(int * matrix, int rows, int columns, int * transpose){
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            *(transpose+(i+j*columns))=*(matrix+(i*rows+j));
        }
    }
}

void swapInt(int * num1, int * num2){
    int aux;
    aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

void sortArray(int array [], int size){
    int min,pos;
    for(int i = 0; i < size - 1; i++){
        min = *(array+i);
        pos = i;
        for(int j = i + 1 ; j < size; j++){
            if(*(array+j)<min){
                min = *(array+j);
                pos = j;
            }
        }
        swapInt(array+i,array+pos);
    }
}

void normalizeText(char * text){

    // To convert lower case to upper case: use -32
    // To convert upper case to lower case: use +32

    if(*text>='a'&&*text<='z'){
        *text-=32;
    }
    text++;
    while(*text){
        if(*text>='A'&&*text<='Z')
            *text+=32;
        text++;
    }
}

char * myStrCpy (char * destination, const char * source){
    char *destinationPtr = destination;
    while ((*destinationPtr++ = *source++) != '\0');
    return destination;
}

void pressAnyKey(){
    printf("\nPress any key to continue...\n");
    getch();
}

/************************************/

void optionSimpleArithmetic(){

    system("cls");
    printf("Write a program that takes two integers and prints their sum, difference, product, and quotient\n");

    int num1 = 120 , num2 = 5;
    printf("\nNumber 1: %d\nNumber 2: %d\n\n", num1, num2);
    printf("%d + %d = %d\n", num1, num2, sum(num1,num2));
    printf("%d - %d = %d\n", num1, num2, difference(num1,num2));
    printf("%d * %d = %d\n", num1, num2, product(num1,num2));
    printf("%d / %d = %d\n", num1, num2, quotient(num1,num2));
    pressAnyKey();
}

/**/

void optionFactorialUsingLoop(){

    system("cls");
    printf("Please, enter an integer to obtain its factorial: ");

    int num;
    scanf("%d", &num);

    if(num < 0){
        printf("Factorial is not defined for negative numbers!\n");
        pressAnyKey();
        return;
    }
    printf("Factorial of %d = %lld\n", num, factorialUsingLoop(num));
    pressAnyKey();
}

/**/

void optionFibonacci(){
    system("cls");
    printf("Please enter an integer to see if it belongs to the Fibonacci series: ");

    int num;
    scanf("%d",&num);

    printf("The number %d %s to the Fibonacci series",num,isInFibonacci(num)?"belongs":"does not belong");
    pressAnyKey();
}

/**/

void optionRecursiveFactorial(){
    system("cls");
    printf("Please, enter an integer to obtain its factorial using recursion: ");

    int num;
    scanf("%d", &num);

    if(num < 0){
        printf("Factorial is not defined for negative numbers!\n");
        pressAnyKey();
        return;
    }
    printf("Factorial of %d = %lld\n", num, recursiveFactorial(num));
    pressAnyKey();
}

/**/

void optionPrimeNumber(){
    system("cls");
    printf("Please, enter an integer to see if it is prime number or not: ");

    int num;
    scanf("%d", &num);
    printf("The number %d is%s prime number", num,isPrimeNumber(num)?"":" NOT");

    pressAnyKey();
}

/**/

void optionArrayReversal(){
    system("cls");
    printf("Array:\n");

    int array [] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(array)/sizeof(int);

    showArray(array,size);

    reverseArray(array,size);

    printf("Reversed array:\n");
    showArray(array,size);

    pressAnyKey();
}

/**/

void optionPalindrome(){
    system("cls");
    printf("Please, enter a word to see if it is a palindrome or not: ");

    char word [50];
    fflush(stdin);
    gets(word);

    printf("Your word %s is%s a palindrome\n",word,isPalindrome(word)?"":" NOT");

    pressAnyKey();
}

/**/

void optionTransposeMatrixInt(){
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int transpose[3][3];
    int rows = 3, columns = 3;

    system("cls");
    printf("Matrix:\n");

    showMatrixInt(&matrix[0][0],rows,columns);
    transposeMatrixInt(&matrix[0][0],rows,columns,&transpose[0][0]);

    printf("Transposed matrix:\n");
    showMatrixInt(&transpose[0][0],rows,columns);

    pressAnyKey();
}

/**/

void optionArraySort(){
    system("cls");
    printf("Array:\n");

    int array [] = {6, 2, 4, 3, 5, 1};

    int size = sizeof(array)/sizeof(int);

    showArray(array,size);

    sortArray(array,size);

    printf("Sorted array:\n");
    showArray(array,size);

    pressAnyKey();
}

/**/

void optionNormalizeText(){
    system("cls");
    printf("Text:\n");

    char text [] = "ThiS is A TeSt SeNTENCe.";
    printf("%s\n\n",text);

    normalizeText(text);
    printf("Normalized text:\n");

    printf("%s\n",text);

    pressAnyKey();
}

/**/

void optionCreateTextFile(){
    system("cls");
    char text[200];
    printf("Type any text you would like to save into a file:\n");
    fflush(stdin);
    fgets(text, sizeof(text), stdin);

    FILE *myFile;
    myFile = fopen("./SampleText.txt", "w+");
    if (!myFile) {
        printf("Error!\n");
    } else {
        fprintf(myFile, "%s", text);
        fclose(myFile);
        printf("Text has been saved to ./SampleText.txt\n");
    }
    pressAnyKey();
}

/**/

void optionReadTextFile(){
    system("cls");
    char text[200];
    FILE *myFile;
    myFile = fopen("./SampleText.txt","r");
    if(!myFile){
        printf("Error, the file doesn't exist!");
    }else{
        fgets(text,sizeof(text),myFile);
        printf("File content:\n%s", text);
        fclose(myFile);
    }
    pressAnyKey();
}

/**/

void optionMyStrCpy(){
    system("cls");

    char textSample [] = "This is a text sample.";
    char destination[50];

    myStrCpy(destination,textSample);

    printf("Text:\n");
    printf("%s\n\n",textSample);
    printf("Copy:\n");
    printf("%s\n",destination);

    pressAnyKey();
}

/************************************/

void showMenu(){
    system("cls");
    printf("Welcome to Maximiliano's C Programming Basics Menu.\n");
    printf("Please input an option to execute the code (0 to exit):\n");
    printf(" 1. Simple Arithmetic\n");
    printf(" 2. Factorial using loop\n");
    printf(" 3. Fibonacci\n");
    printf(" 4. Recursive factorial\n");
    printf(" 5. Prime Number\n");
    printf(" 6. Array reversal\n");
    printf(" 7. Palindrome\n");
    printf(" 8. Transpose Matrix\n");
    printf(" 9. Array sort\n");
    printf("10. Normalize text\n");
    printf("11. Create Text File\n");
    printf("12. Read Text File\n");
    printf("13. Using my own version of strcpy called 'myStrCpy' to copy one string into another\n");
    printf("\n 0. Exit\n");
}

void showExercise(int option){
    switch (option) {
        case 1:
            optionSimpleArithmetic();
            break;
        case 2:
            optionFactorialUsingLoop();
            break;
        case 3:
            optionFibonacci();
            break;
        case 4:
            optionRecursiveFactorial();
            break;
        case 5:
            optionPrimeNumber();
            break;
        case 6:
            optionArrayReversal();
            break;
        case 7:
            optionPalindrome();
            break;
        case 8:
            optionTransposeMatrixInt();
            break;
        case 9:
            optionArraySort();
            break;
        case 10:
            optionNormalizeText();
            break;
        case 11:
            optionCreateTextFile();
            break;
        case 12:
            optionReadTextFile();
            break;
        case 13:
            optionMyStrCpy();
            break;
        case 0:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid option. Press any key and try again.\n");
            getch();
    }
}
