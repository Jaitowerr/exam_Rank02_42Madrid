## Subject

```BASH
Assignment name  : hidenp
Expected files   : hidenp.c
Allowed functions: write
--------------------------------------------------------------------------------

Escribe un programa llamado hidenp que tome dos cadenas y muestre 1 seguido de
un salto de línea si la primera cadena está escondida en la segunda, de lo
contrario muestra 0 seguido de un salto de línea.

Son s1 y s2 las cadenas. Decimos que s1 está escondida en s2 si es posible
encontrar cada carácter de s1 en s2, en el mismo orden en que aparecen en s1. 
Además, la cadena vacía está escondida en cualquier cadena.

Si el número de parámetros no es 2, el programa muestra un salto de línea.

Ejemplos:

$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
1$
$>./hidenp "abc" "2altrb53c.sse" | cat -e
1$
$>./hidenp "abc" "btarc" | cat -e
0$
$>./hidenp | cat -e
$
$>
```