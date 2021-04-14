# textoso

renderiza texto parecido  a escritura de mano a partir de una cadena de texto, ubicable en cualquier parte de la pantalla, se puede agregar a cualquier proyecto con glut/freeglut, el texto resultado no es uniforme ni plano y puede variar segun la palabra


### linux

de no tener los requerimientos para ejecutarlo, en la carpeta linux se encuentra **requerimientos.sh** que instalara lo necesario para correrlo, es necesario ejecutarlo con sudo ```sudo ./requerimientos``` esto instalara freeglut y mesa-utils

### visual studio

en el caso de visual studio se requiere freeglut mcvs, lo puedes descargar aqui [_Freeglut_](https://www.transmissionzero.co.uk/software/freeglut-devel/), dentro del proyecto y ubicado freeglut se agrega el contenido de [_Freeglut_](https://www.transmissionzero.co.uk/software/freeglut-devel/) (dependencias, entrada y librerias externas) seguido se mueve _freeglut.dll_ segun el equipo (x86/x64) que se encuentra en bin a la carpeta del codigo fuente del proyecto

### uso
una vez agregada la libreria en la parte grafica solo resta declar y ubicar el resultado

 ![howuse](howuse.PNG?raw=true "Guiause")


**y como resultado tenemos esto**

 ![result](result.PNG?raw=true "Guiaresult")

### como funcionan las pociciones?

 se explica mejor en la siguiente imagen
 
 ![guia pos](guiaPos.png?raw=true "Guiapos")
 



