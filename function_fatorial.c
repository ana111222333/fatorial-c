int fatorial(int n) {

    int resultado = 1;

    for(int i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}
