#lang racket

(provide points cs)

(define (points games)
  (let loop ([games games]
             [res 0])
    (if (null? games)
        res
        (loop (cdr games) (+ res (cs (car games)))))))

(define (cs string)
  (define lista (string->list string))
  (cond [(> (char->integer (car lista)) (char->integer (car (cddr lista)))) 3]
        [(< (char->integer (car lista)) (char->integer (car (cddr lista)))) 0]
        [else 1]))