# Trabajo Practico PP3 FIE
## Integrantes:
### CT Franco GUARNIERI

### TP Hernan PEREZ

## Consigna: Pase a codigo C++ el siguiente enunciado

Supongamos que estás diseñando un sistema de reservas de vuelos. Tu tarea es diseñar un modelo de clases UML para el sistema.

Descripción del problema: El  sistema  debe  permitir  a  los  usuarios  buscar  vuelos disponibles,  hacer  reservas  y cancelar reservas.Cada vuelo tiene una fecha y hora de salida, una fecha y hora de llegada, una aerolínea, un número de vuelo y un número de asientos disponibles.Cada usuario tiene un nombre, una dirección de correo electrónico y una lista de reservas de vuelos.Las  reservas  de  vuelos están  compuestas  por  un  número  de  asientos  y  una  lista  de pasajeros.

<p align="center">
    <img src="https://blz04pap006files.storage.live.com/y4m2kA3kaoWMARFKHz7QbOehYhbfyqQ9FVaoYr75jLCEowhxDLV3deS-tGMF05vmUeYWu_adqSHOiMI0RK2TdPVaYCV8dwpfbUrLhtiHwaDndCYdil62Zj6Su7XfLTax4X08_F6krDusDM7lDGMcx3HAkwCVG-_ivTuDx2JDGo-t0uyAV5nmqvbpikMg_RDhmWNLQ6OUissQ95KbrR0uk7hIw?encodeFailures=1&width=1248&height=579"/>
</p>

modelo de interfaz

Programa de Gestión de Vuelos (Equipo Nro 1 - Ejercicio 3- PP3)
------------------------------------------------------------------------
Menú:
1. Buscar Vuelos. // ver de agregar busqueda de reservas, que no dice la 
2. Gestionar reservas:
3. Gestionar usuarios.
--------------------------
Sub-Menú (Buscar Vuelos)
1. Por (parámetros A,B,C).
2. Por (parámetros D,E,F).
3. Por (parámetros ....).
Etc...
-----------------------------
Sub-Menú (Gestionar reservas)
1. Reservar
2. Cancelar una reserva.
---------------------------
Sub-Menú (Gestionar usurios)
1. Cargar nuevo usuario.
2. Administrar Usuarios (solo Administrador)
