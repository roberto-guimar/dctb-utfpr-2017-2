/* Biblioteca com fun��es para calcular informa��es de viagem */

/* Calcula o deslocamento percorrido: Kilometros */

double deslocamento(double velocidade, double tempo) {
    return velocidade * tempo;
}

/* Calcula consumo m�dio: Kilometros/Litro */

double consumo(double velocidade, double tempo, double litrosGastos) {
    return deslocamento(velocidade, tempo) / litrosGastos;
}
