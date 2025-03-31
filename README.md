[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

# Nuñez Francisco Tomas - TP 1 - Ejercicio 2

## ¿Por que conviene incluir el archivo .gitignore?
1. Limpieza de reposiorio:
	Evita que se incluyan en el repositorio archivos innecesarios, esto mantiene el repositotio ordenado y reduce su tamaño
2. Seguridad:
	Excluye archivos que contienen iformacion sensible, evitando que se expongan publicamente
3. Eficiencia:
	Reduce el tiempo de procesamiento de Git, taambien facilita la colaboracion ya que los colaboradores tienen las mismas reglas sobre que archivos ignorar
4. Evita conflictos
5. Estandarizacion:
	Ayuda a mantener una consistencia en el proyecto

## ¿Cuando se debe incluirlo?
1. Inicio del proyecto
2. Antes del primer commit
3. Cuando se agregan nuevas dependencias/herramientas

## ¿Como configurarlo?
1. echo "(nombres de los archivos) >> .gitignore", Creo el archivo
2. git init, Convierte el directorio en un repositorio Git
3. git add .gitignore, Toma los cambios que realice
4. git commit -m (detalles), Indico que se agrego el archivo
5. git branch -M main, rnombra el repositorio a main
6. git remote add origin (link), Conecto el repositorio local con el repositorio remoto
7. ** git push -u origin main**, Envio los cambios al repositoio remoto