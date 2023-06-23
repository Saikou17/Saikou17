#lang racket

(provide square total)

(define (square a-square) ;Funcion que devuelve el numero de granos en la casilla
  (let loop ([contador 1] ;Caso base
             [res 1]) ;Respuesta
    (if (equal? contador a-square) ;Dtene la recursividad cuando el caso base llegue al numero de la casilla
        res ;Retorna la respuesta
        (loop(+ 1 contador)(* res 2))))) ;Paso recursivo: Incrementa uno en el caso base y duplica lo que esta guardado en la respuesta

(define (total) ;Funcion que devuelve el total de granos en el tablero
  (let loop ([res 1] ;Respuesta
             [contador 64]) ;Caso base
    (if (equal? contador 1) ;Revisa si el contador llego a la primera casilla
        res ;Retorna respuesta
        (loop (+ res (square contador))(- contador 1)))));Paso recursivo: Suma el total de granos de cada casilla a la res y desincrementa 1 al caso base