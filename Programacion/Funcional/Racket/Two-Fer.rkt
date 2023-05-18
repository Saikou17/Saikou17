#lang racket

(provide two-fer)

(define (two-fer [name "you"]);Esta linea de condigo usa un parametro opcional con un valor predeterminado
  (if (not(equal? name "you"));Evalua si no son iguales
    (string-append (string-append "One for " name) ", one for me.");Concatena strings 
    "One for you, one for me."));Else