# include <stdio.h>

int fi(int n, int calls, int result){
    if (n <= 0 && calls !=0) {
        printf("calls = %d\n", calls);
    }
    else if(n == 0) {
        calls++;
        return 0;
    }
    else if(n == 1) {
        calls++;
        result++;
        return 1;
        }
    else {
        fi(n-1, calls, result);
        fi(n-2, calls, result);
    }
}

int main() {
    int entrada = 0, fib = 0, calls = 0, aux = 0, result = 0;
    scanf("%d", &entrada);
        while (aux < entrada) {
            scanf("%d", &fib);
            fi(fib, calls, result);
            //printf("%d", );
            aux++;
            
        }
    return 0;
}