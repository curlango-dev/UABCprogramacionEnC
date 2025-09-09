cmake_minimum_required(VERSION 3.31)
project(EstructurasConCartas C)

set(CMAKE_C_STANDARD 23)

add_executable(EstructurasConCartas main.c
        BarajaInglesa.c
        BarajaInglesa.h
        aleatorio.c
        aleatorio.h)
