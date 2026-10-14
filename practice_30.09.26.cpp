#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    //{
    //    int arr2d[2][3] = {
    //         {18, 12, 16},
    //         {17, 28, 5}
    //    };

    //    int sum0 = 0;
    //    int sum1 = 0;
    //    int sum_elements = 0;
    //    int min_num = arr2d[0][0];
    //    int max_num = arr2d[0][0];
    //    for (int i = 0;i < 3;++i) {
    //        sum0 += arr2d[0][i];
    //        sum1 += arr2d[1][i];
    //        sum_elements += i * 2;
    //        if (arr2d[0][i] <= min_num) {
    //            min_num = arr2d[0][i];
    //        }
    //        if (arr2d[1][i] <= min_num) {
    //            min_num = arr2d[1][i];
    //        }

    //        if (arr2d[0][i] >= max_num) {
    //            max_num = arr2d[0][i];
    //        }
    //        if (arr2d[1][i] >= max_num) {
    //            max_num = arr2d[1][i];
    //        }
    //    }

    //    cout << "Сума всіх елементів масиву: " <<  sum0 + sum1;
    //    cout << "\nСереднє арефметичне: " << (sum0 + sum1) / sum_elements;
    //    cout << "\n" << min_num;
    //    cout << "\n" << max_num;
    //}

    //{
    //    int arr2d[3][4] = {
    //        {13, 5, 6, 7},
    //        {10, 1, 1, 1},
    //        {11, 7, 3, 1}

    //    };

    //    int sumX_1 = 0;
    //    int sumX_2 = 0;
    //    int sumX_3 = 0;

    //    int sumY_1 = 0;
    //    int sumY_2 = 0;
    //    int sumY_3 = 0;
    //    int sumY_4 = 0;


    //    for (int i = 0; i < 4;++i) {
    //        sumX_1 += arr2d[0][i];
    //        sumX_2 += arr2d[1][i];
    //        sumX_3 += arr2d[2][i];
    //    }

    //    for (int i = 0;i < 3;++i) {
    //        sumY_1 += arr2d[i][0];
    //        sumY_2 += arr2d[i][1];
    //        sumY_3 += arr2d[i][2];
    //        sumY_4 += arr2d[i][3];
    //    }
    //    cout << "\n\n";
    //    for (int i = 0;i < 1;++i) {
    //        for (int x = 0;x < 4;++x) {
    //            cout << " " << arr2d[i][x] << ' ' << ' ';
    //        }
    //        cout << "| " << sumX_1 << "\n\n";
    //    }
    //    for (int i = 1;i < 2;++i) {
    //        for (int x = 0;x < 4;++x) {
    //            cout << " " << arr2d[i][x] << ' ' << ' ';
    //        }
    //        cout << "| " << sumX_2 << "\n\n";
    //    }        
    //    
    //    for (int i = 2;i < 3;++i) {
    //        for (int x = 0;x < 4;++x) {
    //            cout << " " << arr2d[i][x] << ' ' << ' ';
    //        }
    //        cout << "| " << sumX_3 << "\n";
    //    }

    //    int all_sum = sumX_1 + sumX_2 + sumX_3;

    //    cout << ' ' << "--------------------";
    //    cout << "\n" << ' ' << sumY_1 << ' ' << ' ' << sumY_2 << ' ' << ' ' << sumY_3 << ' ' << ' ' << ' ' << sumY_4 << ' ' << ' ' << "| " << all_sum;
    //    
    //}

    {
        int arr[5][10] = {
            {0,1,2,3,4,5,6,7,8,9},
            {0,1,2,3,4,5,6,7,8,9},
            {0,1,2,3,4,5,6,7,8,9},
            {0,1,2,3,4,5,6,7,8,9},
            {0,1,2,3,4,5,6,7,8,9}
        };
        int arr2[5][5] = {
            {0,1,2,3,4},
            {0,1,2,3,4},
            {0,1,2,3,4},
            {0,1,2,3,4},
            {0,1,2,3,4}
        };

        for (int i = 0;i < 5;++i) {
            for (int x = 0;x < 10;++x) {
                int r = rand() % 50 + 1;
                arr[i][x] = r;
            }
        }
        for (int i = 0;i < 5;++i) {
            cout << "\n\n";
            for (int x = 0;x < 10;++x) {
                cout << arr[i][x] << " ";
            }
        }   


        for (int i = 0;i < 5;++i) {
            for (int x = 0;x < 5;++x) {
                if (x < 1) {
                    arr2[i][x] = arr[i][x] + arr[i][x + 1];
                    
                }
                else if (x > 0 && x < 2) {
                    arr2[i][x] = arr[i][x + 1] + arr[i][x + 2];
                }
                else if (x > 1 && x < 3) {
                    arr2[i][x] = arr[i][x + 2] + arr[i][x + 3];
                }
                else if (x > 2 && x < 4) {
                    arr2[i][x] = arr[i][x + 3] + arr[i][x + 4];
                }
                else if (x > 3 && x < 5) {
                    arr2[i][x] = arr[i][x + 4] + arr[i][x + 5];
                }
            }
        }
        for (int i = 0;i < 5;++i) {
            cout << "\n\n";
            for (int x = 0;x < 5;++x) {
                cout << arr2[i][x] << " ";
            }
        }

    }


    
}

