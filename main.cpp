#include <iostream>
#include <random>

void T()
{
    const int ROW = 10;
    int arr [ROW];

    int i = 0;

    for ( ; i <ROW ; ++i)
    {

    std::random_device rd;
    arr [i] = rd() % 21 -10;                        // для каждого элемента массива генерируем число

    std::cout<< " Element of array № "<< i << " = " << arr[i] << std::endl;

    }

    std::cout<<"\n";

    int q = 0;
    for (; q < ROW; ++q)
    {

        int x = arr[q]/arr[9];                  //каждый сгенерированный элемент массива делим на последний элемент

        std::cout<< "Element of array № " << q << " " << "divided into the last element = " << x << std::endl;

        arr[q]={x};             //присвеваем массиву элементы, которые получились в результате деления

        std::cout<< "New element of array № " << q << " = " << arr[q]<< '\n' <<std::endl;

    }


}

void T2()
{
    int n;
    std::cout<< "Enter n>10 :"<< std::endl;     //пользователь вводит длинну массива
    std::cin>>n;

    if (n>10)
    {
        int *arr =new int [n];

        int k = 0;
        for ( ; k < n; ++k)
        {
            std::cout<< "Enter Element of array №" << k << std::endl;
            std::cin>> arr[k];                                          //пользователь вводит значение массива
            if(arr[k] != 0)
            {
                std::cout << "Element of array №" << k << " = " << arr[k] << std::endl << std::endl;
            }
            else                // если элементы массива = 0, то прибавляем к ним 9-ку
            {
                arr[k] += 9;
                                                         //увеличиваем введенное значение массива на 9
                std::cout << "Element of array №" << k << " " << "Enlarged by 9 = " << arr[k] << "\n" << std::endl;
            }
        }

        int k1;
        int k2;

        std::cout<< "Enter the numbers of the array elements for their addition"<<std::endl;
        std::cout<< "with № :";                                     //просим пользователья ввести интервал сложения массива (с, по)
        std::cin>>k1;

        std::cout<< "on № :";
        std::cin>>k2;

        int s;
        for (; k1 <= k2 ; ++k1)
        {
            s += arr[k1];
        }
        std::cout<< "Amount interval = " << s << std::endl;
        delete [] arr;         // удаление массива

    }

    else
    {

    std::cout<< "n<=10"<<std::endl;
    std::cout<< "try again"<<std::endl;
    }


}

void T3()
{

    int ROWS, COLS;

    std::cout<<  "Enter the number of rows for the array A (5<=rows<=10) :"<<std::endl;
    std::cin>> ROWS;

    std::cout<<  "Enter the number of columns for the array A (5<=columns<=10) :"<<std::endl;
    std::cin>> COLS;

if (5<=ROWS & ROWS<=10 & 5<=COLS & COLS<=10 )
 {
//////////////////////////////////////////

    int **arrA = new int *[ROWS];

    for (int f = 0; f < ROWS; ++f)                  //создание двумерного динамического массива A
    {
        arrA[f] = new int[COLS];
    }
//////////////////////////////////////////


//////////////////////////////////////////

    for (int e = 0; e < ROWS; ++e) {
        for (int r = 0; r < COLS; ++r)                  // заполнение массива A рандомными числами
        {
            std::random_device rd;
            arrA[e][r] = rd() % 11 - 5;
        }
    }
//////////////////////////////////////////

    std::cout << "array A :" << std::endl;
    for (int g = 0; g < ROWS; ++g) {
        for (int h = 0; h < COLS; ++h)                 // вывод элементов массива A
        {
            std::cout.width(2);
            std::cout << arrA[g][h] << "\t";
        }
        std::cout << std::endl;
    }


//////////////////////////////////////////
//////////////////////////////////////////
//////////////////////////////////////////

    std::cout << std::endl;

    std::cout << "Enter the number of rows for the array B (5<=rows<=10) :" << std::endl;
    std::cin >> ROWS;

    std::cout << "Enter the number of columns for the array B (5<=columns<=10) :" << std::endl;
    std::cin >> COLS;

//////////////////////////////////////////

    int **arrB = new int *[ROWS];

    for (int f = 0; f < ROWS; ++f)                  //создание двумерного динамического массива B
    {
        arrB[f] = new int[COLS];
    }
//////////////////////////////////////////


//////////////////////////////////////////

    for (int e = 0; e < ROWS; ++e) {
        for (int r = 0; r < COLS; ++r)                  // заполнение массива B рандомными числами
        {
            std::random_device rd;
            arrB[e][r] = rd() % 11 - 5;
        }
    }
//////////////////////////////////////////

    std::cout << "array B :" << std::endl;
    for (int g = 0; g < ROWS; ++g) {
        for (int h = 0; h < COLS; ++h)                 // вывод элементов массива B
        {
            std::cout.width(2);
            std::cout << arrB[g][h] << "\t";
        }
        std::cout << std::endl;
    }

//////////////////////////////////////////

    int **arrC = new int *[ROWS];

    for (int f = 0; f < ROWS; ++f)                  // создание двумерного динамического массива C
    {
        arrC[f] = new int[COLS];
    }

//////////////////////////////////////////


//////////////////////////////////////////

    for (int e = 0; e < ROWS; ++e) {
        for (int r = 0; r < COLS; ++r)                  //заполнение массива С суммой двух массивов
        {
            arrC[e][r] = arrA[e][r] + arrB[e][r];
        }
    }

/////////////////////////////////////////

/////////////////////////////////////////

    std::cout << "array С :" << std::endl;
    for (int g = 0; g < ROWS; ++g)
    {
        for (int h = 0; h < COLS; ++h)                 // вывод элементов массива C
        {
            std::cout.width(2);
            std::cout << arrC[g][h] << "\t";
        }
        std::cout << std::endl;
    }

/////////////////////////////////////////

/////////////////////////////////////////

    for (int i = 0; i < ROWS; ++i)
    {
        delete [] arrA[i];
        delete [] arrB[i];
        delete [] arrC[i];
    }                                                   //удаление массивов

    delete [] arrA;
    delete [] arrB;
    delete [] arrC;

 }

/////////////////////////////////////////

/////////////////////////////////////////

else
 {
    std::cout<< "wrong range" <<std::endl;
     std::cout<< "Try again" <<std::endl;
 }

}

void T4()
{
    char *str=new char [1000];
    std::cin.getline(str,1000);

    char *str2=new char [1000];
    std::cin.getline(str2,1000);

    int i=0;
    for (i; i < 1000; ++i) {
        if(str[i]=='\0'){
          break;
        }
    }

    int j=0;
    for (j; j < 1000; ++j) {
        if(str2[j]=='\0'){
            break;
        }
    }

    char *new_str=new char [i+j];

    for (int k = 0, q=0; k <i+j ; ++k) {
        if(k<i) {
            new_str[k] = str[k];
        }
        else{
            new_str[k] = str2[q];
            ++q;
        }

    }
    delete [] str;
    delete [] str2;

   // char* new_str2= std::strcat(str,str2);
   // std::cout<<new_str2;

    std::cout<<new_str;

}


int main ()
{
    //T();
    //T2();
    //T3();
    T4();
}

