# Tarea 1.I.

![](images/1.png)

---

## Compile, corra y analice el funcionamiento de:

### sizes.cpp

![](images/2.png)

Como vimos en clase, este comando imprime los tamaños ocupados en memoria para cada tipo de variable.



### inter.cpp

![](images/3.png)

En este código ocurren varias cosas:

* En las primeras 3 líneas:
  
  * El valor `-819285190` es asignado a una variable tipo entero de 3 formas distintas:

    * Notación binaria
    * Notación hexadecimal
    * Notación decimal
* En la línea 4, se imprime este mismo valor como variable tipo entero pero a su interpretación a complemento a 2.
* En la línea 5, se imprime el mismo valor pero en su notación de punto flotante.
* En la línea 6 y 7 se interpreta este mismo valor como tipo booleano, que se interpreta como verdadero para cualquier valor menos cero. Por lo que se imprime `true` al principio, y false después de asignarle a esta variable el valor cero.
* Finalmente se asigna el mismo valor en binario de esta variable a una variable tipo punto flotante, por lo que la interpretación cambia, ya que solo algunos datos del binario son tomados para el número en sí, y los otros son asignados la posición del punto decimal.

---

## Representación binaria con complemento a 2 para números enteros negativos:

## Representación a 32 bits de:

* -125:
* -4096:
* -1000000:
