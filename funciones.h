#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

double suma(double a, double b);
double resta(double a, double b);
double multiplicacion(double a, double b);
double division(double a, double b);
double factorial(double a);


double suma(double a, double b)
    {
    double result;
    result=a+b;

    return result;
    }//suma entre el primer operando y el segundo operando


double resta(double a, double b)
    {
    double result;
    result=a-b;

    return result;
    }//la resta entre el primer operando y el segundo


double division(double a, double b)
    {
    if(b==0)
            {
            printf("\nError, no se puede dividir un numero por 0\n");
            return 0;
            }

    double result;
    result=a/b;

    return result;
    }//la division entre el primer operando y el segundo


double multiplicacion(double a, double b)
    {
    double result;
    result=a*b;

    return result;
    }//saca la multiplicasion entre el 1er operando y el segundo


double factorial(double a)
    {
    double i, result=1;

    for(i=1;i<=a;i++)
        {
        result=result*i;
        }

    return result;
    }

#endif // FUNCIONES_H_INCLUDED
