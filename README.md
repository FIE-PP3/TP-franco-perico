# Trabajo Practico PP3 FIE
## Integrantes:
### CT Franco GUARNIERI

### TP Hernan PEREZ

## Consigna: Pase a codigo C++ el siguiente enunciado

Supongamos que estás diseñando un sistema de reservas de vuelos. Tu tarea es diseñar un modelo de clases UML para el sistema.

Descripción del problema: El  sistema  debe  permitir  a  los  usuarios  buscar  vuelos disponibles,  hacer  reservas  y cancelar reservas.Cada vuelo tiene una fecha y hora de salida, una fecha y hora de llegada, una aerolínea, un número de vuelo y un número de asientos disponibles.Cada usuario tiene un nombre, una dirección de correo electrónico y una lista de reservas de vuelos.Las  reservas  de  vuelos están  compuestas  por  un  número  de  asientos  y  una  lista  de pasajeros.

<p align="center">
    <img src="http://imgfz.com/i/zvOGkN7.png"/>
</p>
modelo de interfaz

Programa de Gestión de Vuelos (Equipo Nro 1 - Ejercicio 3- PP3)
------------------------------------------------------------------------
Menú:

1.ingrese a su cuenta.

--------> ingrese su nombre de usuario

-------------------* Buscar Vuelos

-------------------* Gestionar Reservas

----------------------------+ Hacer Reservas

----------------------------+ Cancelar Reservas

--------> Menú Principal

2.registrarme.

--------> Agregar un Usuario.

--------> Menú principal.

-------------------------------EJERCICIO LÍNEA AÉREA----------------------------
Secuencia de funcionalidades a probar:

1) Intentar ingresar con usuario que no existe (solo existe: hernan y juansito):
	Usuario: franco

2) Crear un usuario:
	Usuario: franco
	Mail: 	 francoguarnieri@hotmail.com

3) Ingresar con usuario creado:
	Usuario: franco

4) Buscar un vuelo inexistente:
	Origen: Mendoza
	Salida: 13/25/12
	Destino: Neuquen
	Llegada: 10/24/12

5) Buscar vuelos existentes:
	Origen: BsAs
	Salida: 12/25/12
	Destino: Salta
	Llegada: 13/25/12

6) Reservar vuelo sin asientos disponibles (0 ASIENTOS):
	Nro 5
	Asientos: 2

7) Reservar vuelo con asientos disponibles (15 ASIENTOS):
	Nro 3
	Asientos: 2
	Pasajeros: Franco - DNI: 35440779
	Pasajeros: Carlos - DNI: 36440785

8) Ingresar con otro usuario:
	Usuario: hernan

9) Buscar vuelos existente:
	Origen: BsAs
	Salida: 12/25/12
	Destino: Salta
	Llegada: 13/25/12
	VER: asientos disponibles (Vuelo Nro 3 13 ASIENTOS)

10) Reservar vuelo con asientos disponibles (13 ASIENTOS):
	Nro 3
	Asientos: 1
	Pasajeros: Hernan - DNI: 3462851

11) Cancelar reserva que NO corresponde a ese usuario (a hernan):
	Nro de reserva a cancelar: 1

12) Cancelar reserva que SI corresponde a ese usuario (a hernan):
	Nro de reserva a cancelar: 2

------------------------------------------------------------------------------
Escalabilidad (limitación):
1) Mostrar  nivel administrador: vuelos y reservas. (Implementación inmedaita)
2) Mostrar a nivel usuario: reservas por usuario. (Implementación inmedaita)
3) Posibilidad de gestionar (ABM) un nuevo vuelo en modo usuario administrador.
4) Posibilidad de gestionar más de una aerolínea.
5) POsibilidad de gestionar tripulaciones asignadas a cada vuelo.
6) etc...
