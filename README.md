# Taller de Lenguajes 1 - TP1_2024 - Miguel Juárez

### Archivo gitignore:

El archivo .gitignore es un archivo de configuracion que se utiliza para evitar que se hagan commits de archivos que no queremos que se guarden en nuestro repositorio.
    
Es conveniente incluirlo ya que así evitamos que se guarden distintos tipos de archivos que no necesitamos, como archivos temporales, archivos de compilacion, archivos generados por el propio editor, y hasta archivos de configuracion que deben permanecer ocultos.

Por lo general el archivo .gitignore se debe crear al inicio de cada proyecto, luego de haber ejecutado el comando git init.


1. Primero creamos el archivo .gitignore en la raíz del repositorio local.
2. Agregamos las reglas para ignorar los archivos que queremos

    * Para ignorar todos los archivos con una determinada extencion escribimos **\*."extencion"** por ejemplo: **\*.log** que vá a ignorar todos los archivos con la extencion .log.
    * Para ignorar carpetas con todo su contenido escribimos **"nombre_de_la_carpeta"/**, por ejemplo **node_modules/**, en este ejemplo se vá a ignorar la carpeta node_modules y todo su contenido.
3. Por ultimo se guardan los cambios y realiza un commit para guardar los cambios.

###### Ejercicio 2 apartado 3c
Podemos observar la carpeta .vscode que es propia del editor y que no es necesario subirla, así que se debe inluirla dentro del archivo .gitignore.

    

