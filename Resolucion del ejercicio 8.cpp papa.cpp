Tema 8. Ejercicio 2 Resuelto.

En una empresa pagan según las horas trabajadas y una tarifa fija por hora.
Si la cantidad de horas trabajadas en una semana es mayor a 40, la tarifa
se incrementa en un 35% para las horas extras. Escribe una acción principal
que solicite la identificación de 5 empleados, el monto cancelado por hora, y
la cantidad de horas trabajadas por cada uno, llame a acciones/funciones que
calculen el salario semanal por horas trabajadas (<=40) y los ingresos por
concepto de horas extras, y finalmente informe los resultados en la acción principal.

Enviar otra forma de resolver el ejercicios

//SOLUCION Tema 8. Ejercicion 2
//=============================

//Declaracion y definición de variables necesarias
//------------------------------------------------
string  identificacion  =   ""      ;   //para guardar la identificación del trabajador
float   tarifaFija      =   0.0     ;   // tarifa por hora normal
float   cantidadHoras   =   0.0     ;   // total horas trabajadas por trabajador;
float   horasExtras     =   0.0     ;   // total horas extras trabajadas
float   horasMaxSemanal =   40.0    ;   // cantidad maxima de horas normales semanales
float   pagoSemanal     =   0.0     ;
float   pagoSobretiempo =   0.0     ;

// Accion para pedir la información de un trabajador
void ingresarInformacionDelTrabajador(int nroControl)
    {
        print("Ingrese los datos correspondiente al Trabajador : " + nroControl +);
        print("---------------------------------------------------------------");
        print(" ");
        print("Identificación : ");
        read(identificacion);
        print("-------------");
        print("Valor Hora Trabajada : ");
        read(tarifaFija);
        print("---------");
        print("total Horas Trabajadas : ");
        read(cantidadHoras);
        print("-------------");
    }

//función que calcula el pago semanal
float   calcularPagoSemanal()
    {
        float resultado = 0.0
        if cantidadHoras > 40.0
            {
                resultado   =  40.0 * tarifaFija  ;
            }
        else
            {
                resultado = cantidadHoras * tarifaFija ;
            }  
        return(resultado);  
        
    }

void    calcularSobretiempo()
    {
        //premisa : si 'cantidadHoras' es mayor que 40
        // calculamos el sobretiempo, en caso contrario el sobretiempo es cero
        if cantidadHoras > 40
            {   //condición true
                horasExtras     =   cantidadHoras - 40    ;
                pagoSobretiempo =   horasExtras * (tarifaFija * 1.35);
                
            }
        else
            {
                horasExtras     =   0.0     ;
                pagoSobretiempo =   0.0     :
            }
    }
//accion principal: solicita identificacion de 5 empleados, y sus datos
//=====================================================================
void main()
    {
        //aqui efectuamos una iteracion hasta 5 veces con 'for'
        //para solicitar la información de 5 trabajadores
        //----------------------------------------------------
        for (int control = 1 ; control < 6 ; control++ ;)
            {
                //solicitando la informacion de 1 trabajador (acción)
                ingresarInformacionDelTrabajador(control)

                //determina el monto a pagar en la semana (función)
                pagoSemanal = calcularPagoSemanal();

                //determinar pago del sobretiempo si corresponde (acción)
                calcularSobretiempo();

                //finalmente informe los resultados en la acción principal
                //aqui van impresos los resultados
                print ("Pago de trabajador : " + control + ) ;
                print ("El pago semanal del trabajador : " + identificacion + "es de : " + pagoSemanal + ) ;
                print ("El pago semanal de las " + horasExtras + "horas extras es de : " + pagoSobretiempo + ) ;


            }
    }