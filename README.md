# textoso

renderiza texto parecido  a escritura de mano a partir de una cadena de texto, ubicable en cualquier parte de la pantalla, se puede agregar a cualquier proyecto con glut/freeglut, el texto resultado no es uniforme ni plano y puede variar segun la palabra


### linux

de no tener los requerimientos para ejecutarlo, en la carpeta linux se encuentra **requerimientos.sh** que instalara lo necesario para correrlo, es necesario ejecutarlo con sudo ```sudo ./requerimientos``` esto instalara freeglut y mesa-utils

### visual studio

en el caso de visual studio se requiere freeglut mcvs, lo puedes descargar aqui [_Freeglut_](https://www.transmissionzero.co.uk/software/freeglut-devel/), ubicado freeglut se agrega el contenido de [_Freeglut_](https://www.transmissionzero.co.uk/software/freeglut-devel/) (directorios de inclusion adicionales, directorio de bibliotecas adicionales y dependencias adicionales) ya esta listo, sin embargo _el proyecto ya posee esta configuracion_ solo faltando agregar la carpeta _freeglut_ a C:\ y el depurador en 32 bits 

### uso
una vez agregada la libreria en la parte grafica solo resta declar y ubicar el resultado

 ![howuse](howuse.PNG?raw=true "Guiause")


**y como resultado tenemos esto**

 ![result](result.PNG?raw=true "Guiaresult")

### como funcionan las pociciones?

 se explica mejor en la siguiente imagen
 
 ![guia pos](guiaPos.png?raw=true "Guiapos")
 



