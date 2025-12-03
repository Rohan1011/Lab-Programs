#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <omp.h>
#include <time.h>
int is_prime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int main()
{
    long n = 1000000;
    clock_t time_start, start, end;
    double cpu_time;
    printf("\n the range of numbers is 1 to %d\n", n);
    printf("\n---------------------------------\n");
    // Serial Execution
    start = clock();
    for (int i = 1; i <= n; i++)
    {
        is_prime(i);
    }
    end = clock();
    cpu_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf(" Time to compute prime numbers serially: %f\n", cpu_time);
    // Parallel Execution
    start = clock();
    #pragma omp parallel for
    for (int i = 1; i <= n; i++)
    {
        is_prime(i);
    }
    end = clock();
    cpu_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time to compute numbers Parallel: %f\n", cpu_time);
    return 0;
}
user@fedora:$ gedit prog4.c 
user@fedora:$ gcc -fopenmp prog4.c -o program 
user@fedora:~$ ./program the range of numbers is 1 to 1000000 
--------------------------------- 
Time to compute prime numbers serially: 0.104273 
Time to compute numbers Parallel: 0.270876
