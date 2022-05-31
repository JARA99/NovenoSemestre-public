# Laboratorio Efecto Fotoeléctrico

En esta carpeta se encuentran los códigos utilizados para realizar las gráficas y fits utilizados para calcular la constante de Planck.

Los archivos están organizados de la siguiente manera:

```
├── Graficas
│   ├── Naranja.pdf
│   ├── Rojo.pdf
│   ├── UV.pdf
│   ├── Verde.pdf
│   ├── Verde_new.pdf
│   ├── Violeta.pdf
│   └── constante.pdf
├── cte
│   ├── constante.gnu
│   └── cte.dat
└── histo
    ├── Histo_for_colors.cpp
    ├── Naranja.csv
    ├── Rojo.csv
    ├── Ultravioleta.csv
    ├── Verde.csv
    └── Violeta.csv
```

* La carpeta de `Graficas` contiene las gráficas ya compiladas.
* La carpeta `cte` contiene el código de gnuplot y los datos utilizados para correrlo.
* La carpeta de `histo` contiene el código de root y los archivos `.csv` con los datos tomados en el laboratorio, aún que ligeramente modificados, unificando los datos tomados con y sin luz en un mismo archivo de 6 columnas.
