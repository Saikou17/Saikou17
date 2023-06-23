#lang racket
(provide solution)

;Solucion 1
(define (solution string)
  (if (equal? string "");Caso especial
      ""
      (let loop ;Recursion con cola
        ([string string];Variable string 
         [solucion ""]);Lista que contiene mi solucion
        (if (equal? (string-length string) 1);Caso base
            (string-append solucion (list->string(list (string-ref string 0))));Return final
            (loop (substring string 0 (- (string-length string) 1))(string-append solucion (list->string(list (string-ref string (- (string-length string) 1))))))))));Recursion con cola
  
      
       
  
  