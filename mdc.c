# include <stdio.h>

int mdc(int ma, int me){
    if (ma%me == 0) {return me;}
    else {
        return mdc(me, (ma%me));
    };
}

int main() {
    int casos = 0, i = 0, figRic = 0, figVic = 0;
    scanf("%d", &casos);
        int result[casos];
        for (i = 0;i < casos;i++) {
            scanf("%d %d", &figRic, &figVic);
            if (figRic == figVic) {
                result[i] == figVic;
            }
            result[i] = mdc(figRic, figVic);
        }
        for (i = 0;i < casos;i++) {
            printf("%d\n",result[i]);
        }
    return 0;
}