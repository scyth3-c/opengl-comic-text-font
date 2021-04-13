# textoso

renderiza texto parecido  a escritura de mano en opengl, se puede agregar a cualquier proyecto con glut/freeglut, el texto resultado no es uniforme ni plano y puede variar segun la palabra



## linux

de no tener los requerimientos para ejecutarlo, en la carpeta linux se encuentra **requerimientos.sh** que instalara lo necesario para correrlo, es necesario ejecutarlo con sudo ```sudo ./requerimientos``` esto instalara freeglut y mesa-utils

## visual studio

en el caso de visual studio se requiere freeglut mcvs, lo puedes descargar aqui [_Freeglut_](https://www.transmissionzero.co.uk/files/software/development/GLUT/freeglut-MinGW.zip),dentro del proyecto y ubicado freeglut se agrega el contenido de [_Freeglut_](https://www.transmissionzero.co.uk/files/software/development/GLUT/freeglut-MinGW.zip) (dependencias, entrada y librerias externas) seguido se mueve _freeglut.dll_ que se encuentra en bin a la carpeta del codigo fuente del proyecto
