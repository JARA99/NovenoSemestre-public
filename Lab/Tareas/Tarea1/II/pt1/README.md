# Tarea 1.II.1.

El código fue compilado y ejecutado mediante el siguiente código:

```
g++ simple.cpp class01.cpp -o run && ./run
```

La salida fue la siguiente:

```
❯ g++ simple.cpp class01.cpp -o run && ./run
Soy el constructor SIN argumentos
Soy el constructor CON argumento
Hay 2 instancias de simple
Hay 2 instancias de simple
Soy el constructor CON argumento
Hay 3 instancias de simple
La frase es: No hay
La frase es: No estamos en Marte
La frase es: Voy de ultimo
El ID es: 1
El ID es: 2
El ID es: 3
Soy el destructor
Hay 2 instancias de simple
Soy el destructor
Soy el destructor
```

Y después de hacer un `ls` vemos que aparece el archivo `run`:

```
❯ ls
README.md  T1II1.png  class01.cpp  run  simple.cpp  simple.hpp
```

Se realizará un archivo `.gitignore` para omitir el archivo `run` en git.