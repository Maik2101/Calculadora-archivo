int sumar(int suma1, int suma2){
    int suma;
    suma= suma1 + suma2;
    return suma;
}
int restar(int resta1,int resta2){
    int resta;
    resta= resta1 - resta2;
    return resta;
}
int multiplicar(int multi1,int multi2){
    int multiplicar;
    multiplicar= multi1 * multi2;
    return multiplicar;
}
float dividir(float  divi1,float divi2){
    float division;
    if(divi2 == 0){
    return 0;
    }
    else
    {
    division= divi1 / divi2;
    }
    return division;
}