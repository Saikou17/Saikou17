#lang racket

(provide litres)

(define (litres time)
  (inexact->exact(floor (* time 0.5))));Floor redonde al numero mas bajo y inexact->exact cambia de flotante a entero